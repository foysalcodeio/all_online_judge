/**
    Md. Foysal
    --------------
                ..Think Big...
 ...Don't afraid fail. It's help one step making stronger...

**/
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <queue>
#define ll long long int
#define rep(i,n) for(i=0; i<n; i++)
#define ff first
#define ss second
#define mp make_pair
#define pb(x) push_back(x)
#define sf(a) scanf("%d", &a)
#define sf1(a,b) scanf("%d%d", &a, &b)
#define pf(a) printf("%d", &a)
#define pf2(a, b) printf("Case %d: %d\n", a, b)
#define pii pair<int, int>
#define uu first
#define vv second
#define mem(x,y) memset(x, y, sizeof(x))
#define SIZE 22
#define MOD 20071027

using namespace std;

const int lim=25;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

int x, y, n, m, a, b, c, p, q, z;
char grid[lim][lim];
int vis[lim][lim], cnt;

void init(int n, int m)
{
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            grid[i][j]='.';
            vis[i][j]=0;
        }
    }
}


bool valid(int x, int y)
{
    if(x>=1 && y>=1 && x<=n && y<=m && (grid[x][y]=='.' || grid[x][y]=='@') && vis[x][y]==0)
        return true;
    return false;
}

void dfs(int x, int y)
{
    vis[x][y]=1;
    cnt++;

    for(int i=0; i<4; i++)
    {
        int xx = x+dx[i];
        int yy = y+dy[i];
        if(valid(xx, yy))
            dfs(xx, yy);
    }
}

int main ()
{
    int t=1, cas=0;
    cin >> t;
    while(t--)
    {
        cin >> m >> n;
        init(n, m);

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin >> grid[i][j];
                if(grid[i][j]=='@')
                    x=i, y=j;
            }
        }
    cnt=0;
    dfs(x, y);
    printf("Case %d: %d\n", ++cas, cnt);
    }

    return 0;
}
