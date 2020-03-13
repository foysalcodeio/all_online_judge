#include <iostream>
#include <cstdio>
#define M 1000000007
using namespace std;
int nCr(int n,int r){
    int i,d,ans=1;
    d=n-r;
    if(d<r)
        r=d;

    for(i=0;i<r;i++)
         ans=(ans*(n-i)/(i+1))%M;
    return ans;
}
int main()
    {
        int n,r;
        scanf("%d %d",&n,&r);
        printf("%d",nCr(n,r));
    return 0;
}
