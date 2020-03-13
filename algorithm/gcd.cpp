#include <iostream>
#include <cstdio>
using namespace std;
int gcd(int a, int b){
    while(a>0){
        if(a<b)swap(a,b);
        a -= b;
    }
    return b;
}
int main ()
{
    int a,b;
    while(scanf("%d %d", &a, &b)==2 && a>0 && b> 0){
        printf("%d\n", gcd(a,b));
    }

  return 0;
}
