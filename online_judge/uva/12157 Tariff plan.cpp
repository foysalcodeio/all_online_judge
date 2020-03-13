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

    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);


    int T, tc=1, sec, N;
    cin >> T;
    while(tc<=T)
    {
        cin >> N;
        int mile_cost = 0, juice_cost = 0;
        while(N--)
        {
            cin >> sec;
            mile_cost = mile_cost + (sec/30)*10 + 10;
            juice_cost = juice_cost + (sec/60)*15 + 15;
        }
        cout << "Case "<<tc<<": ";

        if(mile_cost<juice_cost)
            cout << "Mile "<<mile_cost<<endl;
        else if(mile_cost==juice_cost)
            cout << "Mile ";
        if(juice_cost<=mile_cost)
            cout << "Juice "<<juice_cost<<endl;

        tc++;
    }
    return 0;
}
