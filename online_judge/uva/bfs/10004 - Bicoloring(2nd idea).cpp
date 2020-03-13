/**
    problem : uva-10004(2nd idea)
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

vector<int>adj[lim];
int color[lim];

void bfs(int n)
{
    int flag=0;
    memset(color, 0, sizeof(color));

    color[n]=1;
    queue<int>q;
    q.push(n);
    while(!q.empty())
    {
        int node=q.front();
        q.pop();

        for(int i=0; i<adj[node].size(); i++)
        {
            int child=adj[node][i];
            if(color[child]==0)
            {
                q.push(child);
                if(color[node]==1)
                {
                    color[child]=2;
                }
                else{
                    color[child]=1;
                }
            }
            else{
                if(color[node]==color[child])
                {
                    flag=1;
                    break;
                }
                else if(color[node]==1)color[child]=2;
                else color[child]=1;
            }
        }
        if(flag==1){break;}
    }
    if(flag==1)cout << "NOT BICOLORABLE." << endl;
    else cout << "BICOLORABLE." << endl;
}
int main ()
{
    int node;
    while(cin >> node)
    {
        if(node==0)return 0;
        int n;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            int n1, n2;
            cin >> n1 >> n2;
            adj[n1].pb(n2);
            adj[n2].pb(n1);
        }
        bfs(0);
        for(int i=0; i<node; i++)adj[i].clear();
    }
    return 0;
}
