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

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

int w, h, cnt;

char grid[25][25];

void bfs(int x, int y)
{
    grid[x][y]='#';
    for(int i=0; i<4; i++)
    {
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx>=0 && ny>=0 && nx<h && ny<w && grid[nx][ny]=='.')
        {
            bfs(nx, ny);
            cnt++;
        }
    }
}

int main ()
{
    int t;
    sf(t);

    for(int k=1; k<=t; k++)
    {
        int xx, xy;
        sf1(w,h);

        cnt=1;
        cin.ignore();
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                scanf("%c", &grid[i][j]);
                if(grid[i][j]=='@')
                {
                    xx=i;
                    xy=j;
                }
            }
            cin.ignore();
        }
        bfs(xx, xy);
        printf("Case %d: %d\n",k,cnt);
    }
    return 0;
}
