#include <bits/stdc++.h>
using namespace std;
const int mx=1e5+7;
int a[mx];
int tree[3*mx];

void build(int node, int lo ,int hi)
{
	if(lo == hi)
	{
		tree[node] = a[lo];
		return;
	}
	int mid=(lo+hi)/2;

	build(2*node,lo,mid);
	build(2*node+1,mid+1,hi);
	tree[node] = min(tree[2*node],tree[2*node+1]);
}

int query(int node,int lo ,int hi ,int l , int r)
{
	if(lo>hi || lo>r || hi<l)return INT_MAX;
	if(l<=lo && r>=hi) return tree[node];

	int mid = (lo+hi)/2;

	int ret1 = query(node*2, lo, mid, l, r);
	int ret2 = query(node*2+1, mid+1, hi, l, r);
	return min(ret1, ret2);
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
			cin >> a[i];

		build(1,1,n);

		while(q--)
		{
			int x, y;
			cin >> x >> y;
			printf("%d\n",query(1,1,n,x,y));
		}
	}
    return 0;
}
