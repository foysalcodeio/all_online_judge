#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int siz=30050;
vector<int>adj[siz];

int dis[siz], vis[siz];
map < pair <int, int>, int > cost;

class Task{
public:
    void dfs(int u)
    {
        vis[u]=1;
        for(auto i : adj[u])
        {
            if(!vis[i])
            {
                dis[i]=dis[u]+cost[{u, i}];
                dfs(i);
            }
        }
    }
    int cnt=1;
    void solveone(istream &in, ostream &out)
    {
        int n;
        in >> n;
        cost.clear();
        memset(dis, 0, sizeof(dis));
        memset(vis, 0, sizeof(vis));
        memset(adj, 0, sizeof(adj));

        for(int i=1; i<n; i++)
        {
            int u, v, cos;
            cin >> u >> v >> cos;
            adj[u].push_back(v);
            adj[v].push_back(u);

            cost[{u,v}]=cos;
            cost[{v,u}]=cos;
        }

        dis[0]=0;
        dfs(0);
        int start=0, now=dis[0];

        for(int i=1; i<=n; i++)
        {
            if(dis[i]>now)
            {
                now=dis[i];
                start=i;
            }
        }

        memset(dis, 0, sizeof dis);
        memset(vis, 0, sizeof vis);

        dfs(start);
        int mx=0;
        for(int i=0; i<=n; i++){
            mx=max(mx, dis[i]);
        }
        //printf("Case %d: %d\n", cnt++, mx);
        out << "Case " << cnt++ <<": " << mx << endl;
    }
    void solve(istream &in, ostream &out)
    {
        int t;
        in >> t;
        for(int i=0; i<t; i++)
        {
            solveone(in, out);
        }
    }
};

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Task solver;
    istream& in(cin);
    ostream& out(cout);

    solver.solve(in, out);

    return 0;
}
