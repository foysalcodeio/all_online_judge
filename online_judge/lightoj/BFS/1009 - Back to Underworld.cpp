/**
    Md. Foysal
    --------------
    ..Think Big..
*/
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <queue>

using namespace std;

#define ll long long int
#define REP(i,n) for(ll i=0; i<n; i++)
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define sf scanf
#define sf1(a,b) scanf("%d%d", &a, &b)
#define pf printf
#define psb push_back

const int high = 20005;
const int white = 0;
const int BLACK = 1;
const int RED = 2;

vector <int> adj[high];
int ans=0, color[high], vampire = 0, lykan=0;


void adj_clear()
{
    for(int i=0; i<high; i++)
    {
        adj[i].clear();
    }
}
void bfs(int s)
{
    queue<int>q;
    color[s]=BLACK;
    vampire++;
    q.push(s);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(color[v]==white) ///source node parent er child check .. NOT VISITED
            {
                q.push(v); /// QUEUE ta parent node er child node push korbo

                if(color[u]==BLACK)
                {
                    color[v]=RED;
                    lykan++;
                }
                else{
                    color[v]=BLACK;
                    vampire++;

                }
            }
        }
    }
}
int main ()
{
    int t, tc=0;
    sf("%d", &t);
    while(t--)
    {
        adj_clear();
        for(int i=0; i<high; i++)
        {
            color[i]=0;
        }
        int ans=0, n;
        sf("%d", &n);

        for(int i=0; i<n; i++)
        {
            int u, v;
            sf1(u,v);

            adj[u].pb(v);
            adj[v].pb(u);
        }

        for(int i=0; i<high; i++)
        {
            if(!adj[i].empty() && color[i]==white)
            {
                vampire=0;
                lykan=0;

                bfs(i);

                ans+=max(vampire, lykan);
            }
        }
        pf("Case %d: %d\n", ++tc, ans);
    }
    return 0;
}
