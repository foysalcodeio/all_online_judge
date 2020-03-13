/**
    problem :

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
#define lim 20005

long long ans;
int main ()
{
    long long cs=1, n, sq, sum=0;
    while(cin >> n)
    {
        if(n==0)break;
        sum=0;

        long long cnt=0;
        sq=sqrt(n+1);
        cout << "Case " << cs++ << ": ";
        for(int i=2; i<=sq; i++)
        {
            ans=1;
            if(n%i==0){
                cnt++;
                while(n%i==0){
                    ans=ans*i;
                    n=n/i;
                }
                sum=sum+ans;
            }
        }

        if(n!=1 || cnt==0){
            cnt++;
            sum=sum+n;
        }
        if(cnt==1)sum++;
        cout << sum << endl;
    }
    return 0;
}
