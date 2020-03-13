#include <stdio.h>
#include <iostream>
using namespace std;
/* Assume that n is greater than or equal to 1 */
void bin(int n)
{
    if(n == 0)
    return;

  bin(n/2);
  printf("%d", n%2);
}
int main(){
    bin(10);
    return 0;
}
