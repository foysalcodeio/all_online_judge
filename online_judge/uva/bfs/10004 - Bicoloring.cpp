/**
    problem : uva-10004
    Md. Foysal Ahammed
    ----------------------------------------------------
                ..Think Big...
 ...Don't afraid fail. It's help one step making stronger...

**/
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

#define ll long long int
#define rep(i,n) for(i=0; i<n; i++)
#define mp make_pair
#define pb(x) push_back(x)
#define sf(a) scanf("%d", &a)
#define sf1(a,b) scanf("%d%d", &a, &b)
#define pf(a) printf("%d", &a)
#define pf2(a, b) printf("Case %d: %d\n", a, b)
#define pii pair<int, int>
#define mem(x,y) memset(x, y, sizeof(x))
#define SIZE 22
#define MOD 20071027
#define lim 205

vector<int>adj[lim];
bool vis[lim], color[lim];

bool bfs(int src)
{
    vis[src]=1;
    queue<int>q;
    q.push(src);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            if(!vis[v])
            {
                color[v]=!color[u];
                q.push(v);
                vis[v]=1;
            }
            if(color[u]==color[v])return 0;
        }
    }
    return 1;
}
int main ()
{
    while(1)
    {
        int n, e;
        cin >> n;
        if(n==0)break;
        cin >> e;

        memset(vis, 0, sizeof(vis));
        memset(color, 0, sizeof(color));

        for(int i=0; i<n; i++)adj[i].clear();

        while(e--)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        bool check = bfs(0);
        if(check)cout << "BICOLORABLE.\n";
        else cout << "NOT BICOLORABLE.\n";
    }
}


