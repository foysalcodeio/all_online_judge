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

vector <ll> vec[10004];
stack<int>st;
int vis[10004];
ll mx=0, str=0;

void dfs(ll x, ll no)
{
    vis[x]=1;
    for(ll i=0; i<vec[x].size(); i++)
    {
        ll item=vec[x][i];

        if(vis[item]==0)
        {
            vis[item]=1;
            dfs(item, no+1);
        }
    }
    if(mx<no){
        str=x;
        mx=no;
    }
    return;
}
int main ()
{
    ll n;
    cin >> n;
    ll x, y;
    for(ll i=1; i<n; i++)
    {
        cin >> x >> y;
        vec[x].pb(y);
        vec[y].pb(x);
    }
    dfs(1, 0);
    mx=0;

    memset(vis, 0, sizeof(vis));
    dfs(str, 0);

    cout << mx << endl;

    return 0;
}
