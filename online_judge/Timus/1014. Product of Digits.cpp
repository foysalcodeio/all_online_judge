#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll largest_prime(ll n)
{
    vector <ll> p;
    bool cnt = true;
    for(ll i=9; i>=2; i--)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                p.push_ba(i);
                n=n/i;
                cnt=true;
            }
        }
    }
    //sort(p.begin(), p.end(), greater<int>());
    /*
    for(auto x : p){
        cout << x << endl;
    }*/
    if(cnt==false)
    {
        printf("-1\n");
    }
    else{
        sort(p.begin(), p.end());

        for(ll i=0; i<p.size(); i++){
            cout << p[i];
        }
        cout << "\n";
    }
}
int main ()
{
    ll n;
    while(scanf("%lld", &n))
    {
        if(n<=0)return 0;
        else{
          largest_prime(n);
        }
    }
    return 0;
}
