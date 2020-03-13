/**
    problem : DIJKSTRA.
    copy from -safayetblog

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
#define infinity 1<<30 //2^30

vector<int>g[1000];
vector<int>cost[1000];

struct node{
    int u;
    int cost;
    node(int _u, int _cost)
    {
        u=_u;
        cost=_cost;
    }
    bool operator < ( const node& p) const{
        return cost > p.cost;               //operator overloading
    }
};
void dijstkra(int n,  int source)
{
    int dis[n+1];

    for(int i=1; i<=n; i++){
        dis[i]=infinity;
    }

    priority_queue<node>q;
    q.push(node(source, 0));
    dis[source]=0;

    while(!q.empty())
    {
        node top = q.top();
        q.pop();

        int u = top.u;

        for(int i=0; i<(int)g[u].size(); i++)
        {
            int v = g[u][i];

            if(dis[u]+cost[u][i] < dis[v]){
                dis[v] = dis[u]+cost[u][i];
                q.push(node(v, dis[v]));
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout << source << " --> " <<i<<" = "<<dis[i] << endl;
    }
}
int main ()
{
    //vector<int>g[10000], cost[10000];
    int num_nodes, num_edge;
    cin >> num_nodes >> num_edge;

    for(int i=0; i<num_edge; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].pb(v);
        g[v].pb(u);

        cost[u].pb(w);
        cost[v].pb(w);
    }
    int source;
    cin >> source;
    dijstkra(num_nodes, source);
}
