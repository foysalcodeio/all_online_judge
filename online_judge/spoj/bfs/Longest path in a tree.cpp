/**
    problem : Longest path in a tree
    Md. Foysal Ahammed
    ----------------------------------------------------
                    ..Think Big...
    Don't afraid fail. It's help one step making stronger...
**/

#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <queue>
#include <algorithm>

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
#define lim 100000000

int marked[lim/64+2];
#define on(x) (marked[x/64] & (1<<((x%64)/2)
#define mark(x) marked[x/64] |= (1<<((x%64)/2))

#define ll long long int

vector <int> adj[10005];
int vis[10005];
int level[10005];
int k=0, cnt=0;

void bfs(int s)
{

    int p=0;

    queue<int>q;
    q.push(s);
    vis[s]=1;
    level[s]=0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<adj[u].size(); i++)
        {
            int child = adj[u][i];
            if(!vis[child])
            {
                q.push(child);
                vis[child]=1;
                level[child]=level[u]+1;

                if(level[child]>p)
                {
                    p=level[child];
                    cnt=child;
                }
            }
        }
    }
}
int main ()
{
    int node;
    cin >> node;

    for(int i=0; i<node-1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    bfs(1);

    for(int i=0; i<10005; i++){
        level[i]=0;
        vis[i]=0;
    }

    bfs(cnt);
    cout << level[cnt] << endl;

    return 0;
}
