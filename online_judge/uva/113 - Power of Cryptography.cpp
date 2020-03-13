/*------------
K^n=P
(k^n)^1/n=p^(1/n)
k = p^(1/n)
--------------*/
#include "bits/stdc++.h"
using namespace std;
int main ()
{
   double n, p;
   while(scanf("%lf%lf",&n,&p)==2){
     printf("%.0lf\n", pow(p, 1/n));
   }
   return 0;
}
