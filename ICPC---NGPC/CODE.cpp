/**
    UITS Inter University Programming Contest, 2019
    LINK : https://algo.codemarshal.org/contests/uits_iupc_19/problems/G
    PROBLEM: G. Mobile Review
**/
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1005;
bool vis[maxn];

int dp[maxn][2];
vector<int> adj[maxn];

void dfs(int u, int p){
    vis[u] = true;
    dp[u][0] = 0;
    dp[u][1] = 1;

    for(int v : adj[u]){
        if(v == p) continue;
        dfs(v, u);
        dp[u][0] += max(dp[v][0], dp[v][1]);
        dp[u][1] += dp[v][0];
    }
}

int main(){
    int t;
    scanf("%d",&t);

    for(int cs=1; cs<=t; cs++){
        int n, m;
        scanf("%d %d",&n, &m);

        for(int i=1; i<=n; i++) adj[i].clear();
        for(int i=1; i<=n; i++) vis[i] = false;

        for(int i=1; i<=m; i++){
            int u, v;
            scanf("%d %d",&u, &v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int ans = 0;
        for(int i=1; i<=n; i++){
            if(vis[i]) continue;
            dfs(i, 0);
            ans += max(dp[i][0], dp[i][1]);
        }

        printf("Case %d: %d\n",cs, ans);
    }
}
