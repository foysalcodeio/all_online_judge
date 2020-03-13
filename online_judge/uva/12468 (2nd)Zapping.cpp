#include <bits/stdc++.h>

#define pi 2*acos(0.0)
#define all(v) v.begin(),v.end()
#define ff first
#define se second
#define pb push_back
#define sz(a) ((int)a.size())
#define ST(v) sort(all(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define cover(a,d) memset(a,d,sizeof(a))
////============ CONSTANT ===============////
#define inf   1<<30                                           //infinity value
#define eps   1e-9
#define mx    100009
#define mod   1000000007
////=====================================////
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int a, b;
    while((cin>>a>>b)&& (a!=-1 && b!=-1))
    {
        int one, two;
        if(a<b){

            one = b - a;
            two = 100 - one;
        }
        else{
            one = a - b;
            two = 100 - one;
        }
        cout << min(one, two)<<endl;
    }
    return 0;
}
