///this problem same as - spoj: RMQSQ - Range Minimum Query

#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
const int mx=1e5+7;
const int mxlog=20;

int arr[mx];
long long table[mx][mxlog+1];

void build(int arr[], int n)
{
    for(int i=1; i<=n; i++){
        table[i][0]=arr[i];
    }

    for(int b=1; b<=mxlog; b++){
        for(int i=1; i<=n; i++){
           if((i+(1<<b)-1)>n){ // 2^b = 1<<b
                break;
           }
          table[i][b] = min(table[i][b-1], table[i+(1<<b-1)][b-1]);
        }
    }
}

int getmin(int l, int r)
{
    int len=r-l+1;
    int lg=0;
    while((1<<(lg+1)<=len))lg++;

    return min(table[l][lg], table[r-(1<<lg)+1][lg]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; i++)
	{
		printf("Case %d:\n",i);
		int n, q;
		cin >> n >> q;

		for(int i=1; i<=n; i++)
			cin >> arr[i];

		build(arr, n);

		while(q--)
		{
			int x, y;
			cin >> x >> y;
			printf("%d\n",getmin(x,y));
		}
	}
    return 0;
}
