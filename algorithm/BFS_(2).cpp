/**
    problem : BFS
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
#define MOD 20071027
#define lim 20005

void bfs(int n, vector<int>g[], int source)
{
    bool visited[n+1];
    int dis[n+1];
    for(int i=1; i<=n; i++)
    {
        visited[i]=false;
    }

    queue<int>q;
    q.push(source);
    visited[source]=1;
    dis[source]=0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<(int)g[u].size(); i++)
        {
            int v=g[u][i];
            if(!visited[v])
            {
                dis[v]=dis[u]+1;
                q.push(v);
                visited[v]=true;
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout << source << " --> " << i << " = " << dis[i] << endl;
    }

}
int main ()
{
    vector<int>g[10000];
    int num_nodes, numedge;
    cin >> num_nodes >> numedge;

    for(int i=0; i<numedge; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int source;
    cin >> source;

    bfs(num_nodes, g, source);

    return 0;
}
