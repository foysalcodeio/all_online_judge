/**************
Author : Md. Foysal Ahammed

---------------------------------
!cse dept. && failure student
love & passion about programming
*****************/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
/*
for(int i=1; i<=n; i++){
    prefixSum[i] = prefixSum[i-1] + A[i]
}
prefixSum[r] - prefixSum[l-1]
*/
char prime[65001]={};
void siv()
{
    for(int i=2; i<65000; i++){
        if(prime[i]==0){
            for(int j=2; i*j<65000; j++){
                prime[i*j]=1;
            }
        }
    }
}

ll bigmod(ll a, ll n, ll mod)
{
        if(n==0)return 1;
        ll ret=bigmod(a, n/2, mod);
        ret=(ret*ret)%mod;

        if(n%2==1)ret=(ret*a)%mod;
        return ret;
}
int check(int n)
{
    for(int i=2; i<=n-1; i++)
    {
        if(bigmod(i,n,n)!=i)
            return 0;
    }
    return 1;
}
int main()
{
    siv();
    int n;
    while(cin >> n, n)
    {
        if(prime[n]==1 && check(n)==1)
        {
            printf("The number %d is a Carmichael number.\n", n);
        }
        else{
            printf("%d is normal.\n", n);

        }
    }
    return 0;
}


