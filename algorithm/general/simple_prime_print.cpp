///simple prime print
#include <bits/stdc++.h>
using namespace std;

vector <int> prime;
long long int mx = 1e6+7;

void siv()
{
    bool mark[mx+1];
    memset(mark, true, sizeof(mark));

    mark[0]=false;
    mark[1]=false;

    for(int i=2; i*i<=mx; i++){
        if(mark[i]==true){
            for(int j=i*i; j<=mx; j+=i){
                mark[j]=false;
            }
        }
    }
    ///sitting prime
    for(int i=2; i<mx; i++){
        if(mark[i]==true){
            prime.push_back(i);
        }
    }
}
int main ()
{
    int n;
    cin >> n;
    siv();
    for(int i=1; i<=n; i++){
        cout << prime[i] << endl;
    }
    return 0;
}
