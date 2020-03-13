///https://codeforces.com/contest/984/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
#define se second
const int mx = 1000;
int row, col, nx, ny;

#define valid(nx,ny) (nx>=0 && nx<row && ny>=0 && ny<col)

int X[]={0,0,1,-1,-1,1,-1,1};
int Y[]={-1,+1,0,0,1,1,-1,-1};

int main()
{
    int n, m;
    cin >> n >> m;

    vector<char>v[mx];
    row=n; col=m;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            char c;
            cin >> c;
            v[i].push_back(c);
        }
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){

            int bomb=0, space=0, cnt=0;

            for(int k=0; k<8; k++){

                nx=X[k]+i;
                ny=Y[k]+j;
                if(valid(nx, ny)){
                    cnt++;
                    if(v[nx][ny]=='*')bomb++;
                    else space++;
                }
            }

            if(v[i][j]=='.'){
                if(space==cnt)continue;
                else{
                    cout << "NO" << endl;
                    return 0;
                }
            }

            if(v[i][j]!='*'){
                if(bomb==v[i][j]-'0')continue;
                else{
                    cout << "NO\n";
                    return 0;
                }
            }
        }
    }
    cout << "YES" << endl;

    return 0;
}
