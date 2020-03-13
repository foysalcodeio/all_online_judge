/**
    problem : https://codeforces.com/contest/20/problem/C

    Md. Foysal Ahammed
    ----------------------------------------------------
                    ..Think Big...
    Don't afraid fail. It's help one step making stronger...
**/

#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

#define rep(i,n) for(i=0; i<n; i++)
#define pb(x) push_back(x)
#define sf(a) scanf("%d", &a)
#define sf1(a,b) scanf("%d%d", &a, &b)
#define pf(a) printf("%d", &a)
#define pf2(a, b) printf("Case %d: %d\n", a, b)
#define pii pair<int, int>
#define mem(x,y) memset(x, y, sizeof(x))
#define MOD 20071027
#define lim 20005

map<long long, vector < pair <long long, long long> > >graph;
long long dis[100007];
long long parent[100007];
vector<long long>path;
const long long inf = 10e17+9;

struct priority
{
    int operator()(const long long &a, const long long &b)
    {
        return dis[a] > dis[b];
    }
};

void dijstkra(long long n)
{
    priority_queue <long long, vector<long long>, priority > q;
    q.push(n);
    dis[n]=0;
    parent[n]=n;

    while(!q.empty())
    {
        long long u = q.top();
        q.pop();
        int si = graph[u].size();

        for(int i=0; i<si; i++)
        {
            long long v = graph[u][i].first;
            long long cost = graph[u][i].second;

            if(dis[u]+cost < dis[v]){
                dis[v]=cost+dis[u];
                q.push(v);
                parent[v]=u;
            }
        }
    }
}
void print(int n)
{
    if(parent[n]==n)
    {
        cout << n << " ";
        return;
    }
    print(parent[n]);
    cout << n << " ";
}
int main ()
{
    //vector<int>g[10000], cost[10000];
    long long num_nodes, num_edge;
    cin >> num_nodes >> num_edge;

    for(long long i=0; i<num_edge; i++)
    {
        int u, v, cost;
        cin >> u >> v >> cost;
        graph[u].pb(make_pair(v, cost));
        graph[v].pb(make_pair(u, cost));

        /*
        g[u].pb(v);
        g[v].pb(u);
        cost[u].pb(w);
        cost[v].pb(w);*/
    }

    for(long long i=1; i<=100000; i++)
    {
        dis[i]=inf;
    }
    dijstkra(1);

    if(dis[num_nodes]==inf)
    {
        cout << "-1" << endl;
        return 0;
    }
    print(num_nodes);
}
