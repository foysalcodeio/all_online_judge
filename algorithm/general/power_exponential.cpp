/// (a^b)^c
/// int aa = a*b*log(c);



///complexity = O(log_2n)
/// (a^b)%mod
#include <bits/stdc++.h>
using namespace std;

int fastpowercalculation(int a, int n, int mod)
{
    if(n==0)return 1%mod;
    int ret=fastpowercalculation(a, n/2, mod);
    ret=(ret*ret)%mod;

    if((n%2)==1)ret=(ret*a)%mod;
    return ret;
}

