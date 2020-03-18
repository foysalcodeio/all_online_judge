/*
problem link : https://codeforces.com/contest/339/problem/D
problem tag: segment tree
*/
/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e6+7;
ll arr[mx];
ll tree[3*mx];

void build(ll node, ll lo, ll hi, ll level)
{
    if(lo==hi){
        tree[node]=arr[lo];
        return;
    }
    ll mid = (lo+hi)/2;
    build(node*2, lo, mid, level+1);
    build(node*2+1, mid+1, hi, level+1);
    if(!(level&1)){
        tree[node]=tree[node*2]^tree[node*2+1];
    }else{
        tree[node]=tree[node*2] | tree[node*2+1];
    }
}
void update(ll node, ll lo, ll hi, ll l, ll value, ll level)
{
    if(lo>hi || l>hi || l<lo)return;
    if(lo==hi){
        tree[node]=value;
        return;
    }
    int mid=(lo+hi)/2;
    update(node*2, lo, mid, l, value, level+1);
    update(node*2+1, mid+1, hi, l, value, level+1);
    if(!(level&1)){
        tree[node]=tree[node*2]^tree[node*2+1];
    }else{
        tree[node]=tree[node*2] | tree[node*2+1];
    }
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;

    ll siz = 1<<n; /// 2^n

    ll level;
    if(n&1)level=1;
    else level=0;

    for(int i=1; i<=siz; i++){
        cin >> arr[i];
    }
    build(1,1,siz,level);
    for(int i=1; i<=m; i++){
        int p, b;
        cin >> p >> b;

        update(1,1,siz,p,b,level);
        cout << tree[1] << endl;
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
vector <int> prime;
int List[1280];
int listsize;
long long int mx = 1e6+7;

void siv()
{
    bool mark[mx+1];
    memset(mark, true, sizeof(mark));

    mark[0]=false;
    mark[1]=false;

    for(int i=2; i*i<=mx; i++){
        if(mark[i]==true){
            for(int j=i*i; j<=mx; j+=i){
                mark[j]=false;
            }
        }
    }
    ///sitting prime
    for(int i=2; i<mx; i++){
        if(mark[i]==true){
            prime.push_back(i);
        }
    }
}

///Block sieving

int count_primes(int n) {
    const int S = 10000;

    vector<int> primes;
    int nsqrt = sqrt(n);
    vector<char> is_prime(nsqrt + 1, true);
    for (int i = 2; i <= nsqrt; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= nsqrt; j += i)
                is_prime[j] = false;
        }
    }

    int result = 0;
    vector<char> block(S);
    for (int k = 0; k * S <= n; k++) {
        fill(block.begin(), block.end(), true);
        int start = k * S;
        for (int p : primes) {
            int start_idx = (start + p - 1) / p;
            int j = max(start_idx, p) * p - start;
            for (; j < S; j += p)
                block[j] = false;
        }
        if (k == 0)
            block[0] = block[1] = false;
        for (int i = 0; i < S && start + i <= n; i++) {
            if (block[i])
                result++;
        }
    }
    return result;
}
