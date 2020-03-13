#define MAXN 1024000
#define MAXH 21  // 1 + ceil(log2(MAXN))
 
// Flags to identify states. 0 is for "Nothing".
#define UP_SET 1
#define UP_CLR 2
#define UP_FLP 3
 
struct SegTree {
    vector<int> A;  // original array of integers
    vector<int> T;  // segment tree
    vector<int> U;  // segment tree for lazy propagation (the states)
 
    int n;  // size of the array
 
    SegTree(int N=0) : n(N) {
        A.resize(MAXN);
        T.resize(1 << MAXH);
        U.resize(1 << MAXH);
    }
 
    void init() { tree_init(1, 0, n-1); }
    void tree_init(int x, int a, int b) {
        U[x] = 0;
        if (a == b) { T[x] = A[a]; return; }
        int lt = 2*x, rt = lt + 1, md = (a+b)/2;
        tree_init(lt, a, md);
        tree_init(rt, md + 1, b);
        T[x] = T[lt] + T[rt];
    }
 
    void set(int i, int j) { tree_set(i, j, 1, 0, n - 1); }
    void tree_set(int i, int j, int x, int a, int b) {
        propagate(x, a, b);
        if (j < a || i > b) return;
        if (a == b) { T[x] = 1; return; }
        int lt = 2*x, rt = lt + 1, md = (a+b)/2;
        if (a >= i && b <= j) {
            T[x] = b - a + 1;
            U[lt] = U[rt] = UP_SET;
            return;
        }
        tree_set(i, j, lt, a, md);
        tree_set(i, j, rt, md + 1, b);
        T[x] = T[lt] + T[rt];
    }
 
    void clear(int i, int j) { tree_clear(i, j, 1, 0, n - 1); }
    void tree_clear(int i, int j, int x, int a, int b) {
        propagate(x, a, b);
        if (j < a || i > b) return;
        if (a == b) { T[x] = 0; U[x] = 0; return; }
        int lt = 2*x, rt = lt + 1, md = (a+b)/2;
        if (a >= i && b <= j) {
            T[x] = 0;
            U[lt] = U[rt] = UP_CLR;
            return;
        }
        tree_clear(i, j, lt, a, md);
        tree_clear(i, j, rt, md + 1, b);
        T[x] = T[lt] + T[rt];
    }
 
    void flip(int i, int j) { tree_flip(i, j, 1, 0, n - 1); }
    void tree_flip(int i, int j, int x, int a, int b) {
        propagate(x, a, b);
        if (j < a || i > b) return;
        if (a == b) {
            T[x] = T[x] == 1 ? 0 : 1;
            return;
        }
        int lt = 2*x, rt = lt + 1, md = (a+b)/2;
        if (a >= i && b <= j) {
            T[x] = (b - a + 1) - T[x];
            U[lt] = apply_flip(U[lt]);
            U[rt] = apply_flip(U[rt]);
            return;
        }
        tree_flip(i, j, lt, a, md);
        tree_flip(i, j, rt, md + 1, b);
        T[x] = T[lt] + T[rt];
    }
 
    int query(int i, int j) { return tree_query(i, j, 1, 0, n-1); }
    int tree_query(int i, int j, int x, int a, int b) {
        if (j < a || i > b) return -1;
        propagate(x, a, b);
        if (a >= i && b <= j) return T[x];
        int lt = 2*x, rt = lt + 1, md = (a+b)/2;
        int q1 = tree_query(i, j, lt, a, md);
        int q2 = tree_query(i, j, rt, md + 1, b);
        if (q1 < 0) return q2;
        if (q2 < 0) return q1;
        return q1 + q2;
    }
 
    int apply_flip(int v) {
        if (v == UP_SET) return UP_CLR;
        if (v == UP_CLR) return UP_SET;
        if (v == UP_FLP) return 0;
        return UP_FLP;
    }
    void propagate(int x, int a, int b) {
        if (U[x] == 0) return;
        if (U[x] == UP_SET)
            T[x] = b - a + 1;
        else if (U[x] == UP_CLR)
            T[x] = 0;
        else if (U[x] == UP_FLP)
            T[x] = (b - a + 1) - T[x];
 
        if (a != b) {
            int lt = 2*x, rt = lt + 1;
            if (U[x] == UP_SET || U[x] == UP_CLR)
                U[lt] = U[rt] = U[x];
            else
                U[lt] = apply_flip(U[lt]), U[rt] = apply_flip(U[rt]);
        }
        U[x] = 0;
    }
};