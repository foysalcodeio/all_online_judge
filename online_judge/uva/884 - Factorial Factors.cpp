#include <bits/stdc++.h>
using namespace std;
int factorial[1000007];
void solve()
{
    for(int i=0; i<1000007; i++){
        factorial[i]=1;
    }
    factorial[1]=0;
    for(int i=2; i<1000007; i++)
    {
        if(factorial[i]==1)
        {
            for(int j=2; i*j<1000007; j++)
            {
                factorial[i*j]=factorial[i]+factorial[j];
            }
        }
    }
    for(int i=2; i<1000007; i++){
        factorial[i]=factorial[i]+factorial[i-1];
    }
}
int main ()
{
    int n;
    solve();
    while(scanf("%d", &n)!=EOF){
        printf("%d\n", factorial[n]);
    }
    return 0;
}
