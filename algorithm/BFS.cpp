#include <set>
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <climits>
#include <queue>
#include <stack>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

#define FOR(i, L, U) for(int i=(int)L; i<=(int)U; i++)
#define FORD(i, U, L) for(int i=(int)U; i>=(int)L; i--)

#define READ(x) freopen(x, "r", stdin)
#define WRITE(x) freopen(x, "w", stdout)

#define PQ priority_queue
#define PB push_back
#define SZ size()
#define ff first
#define ss second

#define EPS 1e-9
#define SQR(x) ((x)*(x))
#define INF INT_MAX

#define ALL_BITS ((1 << 31) - 1)
#define NEG_BITS(mask) (mask ^= ALL_BITS)
#define TEST_BIT(mask, i) (mask & (1 << i))
#define ON_BIT(mask, i) (mask |= (1 << i))
#define OFF_BIT(mask, i) (mask &= NEG_BITS(1 << i))

typedef long long LL;
typedef vector<char> VC;
typedef vector<vector<char> > VVC;
typedef vector<int> VI;
typedef vector<vector<int> > VVI;
typedef vector<string> VS;
typedef vector<bool> VB;
typedef vector< vector<bool> > VVB;
typedef pair<int, int> PII;
typedef map<int, int> MII;
typedef map<char, int> MCI;
typedef map<string, int> MSI;
typedef map<int, string> MIS;
int GCD(int a,int b){   while(b)b^=a^=b^=a%=b;  return a;   }


#define WHITE 1
#define GRAY 2
#define BLACK 3
#define MAX_NODE 100
#define NIL -1
VVI g;
queue<int> q;
VI path;
VI dist,pre,color;

int nodes, edges;

// s means startNode
void BFS(int s)
{
    int u, v;

   dist = VI(nodes+1,INF);
   pre = VI(nodes+1, NIL);
   color = VI(nodes+1,WHITE);

    color[s] = GRAY;
    dist[s] = 0;
    pre[s] = NIL;
    q.push(s);

    while(!q.empty()) {
        u = q.front();  q.pop();

        FOR(i, 0, g[u].size()-1) {
            v = g[u][i];
            if(color[v] == WHITE) {
                color[v] = GRAY;
                dist[v] = dist[u] + 1;
                pre[v] = u;
                q.push(v);
            }
        }
        color[u] = BLACK;
    }
}

void CreatePath(int s, int v)
{
    if(v == s)
        path.push_back(s);
    else if(pre[v] == NIL)
        path.clear();
    else {
        CreatePath(s, pre[v]);
        path.push_back(v);
    }
}


int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int u, v;

   while(scanf("%d %d", &nodes, &edges)==2){

    g = VVI(nodes+1);

    FOR(i, 1, edges) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    BFS(1);

    cout << "color\tdist\tparent\n";
    FOR(i, 1, nodes) {
        cout << color[i];
        cout << "\t";
        cout << dist[i];
        cout << "\t";
        cout << pre[i];
        cout << "\n";

    }

    CreatePath(1, 5);
    FOR(i, 0, path.size()-1)
        cout << path[i] << " ";
    cout << "\n";
   }
	return 0;
}
