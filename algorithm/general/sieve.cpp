#include <bits/stdc++.h>
using namespace std;
const int mx = 1e7+5;
int status[mx];
int main ()
{
    for(int i=2; i<=mx; i++){
        status[i]=0;
    }
    int sqrt_n = int(sqrt(double(mx)));
    for(int i=3; i<=sqrt_n; i+=2){
        if(status[i>>1]==0){  /// i>>1 = i/2
            for(int j=i*i; j<=mx; j+=i*i){
                status[j>>1]=1;
            }
        }
    }
    for(int i=3; i<=20; i+=2){
        if(status[i>>1]==0){
            cout << i << " ";
        }
    }
}
