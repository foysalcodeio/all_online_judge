#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){return __gcd(a, b);}
ll lcm(ll a, ll b){return (a/__gcd(a,b))*b;}

#define asc(s) sort(s.begin(), s.end())
#define des(s) sort(s.rbegin(), s.rend())
#define pb(x) push_back(x)
#define mp(x, y) make_pair(x, y)
#define all(v) v.begin(), v.end()
#define rev(v) reverse(v.begin(), v.end())
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define precision(x, p) fixed << setprecision(p) << x
#define set_bits(n) __builtin_popcount(n);
#define MOD 1000000007
#define PI 3.14159265358979

template <typename TH>
void _dbg(const char *sdbg, TH h) { cerr << sdbg << "=" << h << "\n"; }
template <typename TH, typename... TA>
void _dbg(const char *sdbg, TH h, TA... t)
{
    while (*sdbg != ',')
    {
        cerr << *sdbg++;
    }
    cerr << "=" << h << ",";
    _dbg(sdbg + 1, t...);
}
#ifndef ONLINE_JUDGE
#define debug(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug
#endif

template <class T>
T gcd(T a, T b)
{
    return b ? gcd(b, a % b) : a;
};
template <class T>
T lcm(T a, T b) { return a * b / gcd(a, b); };

vector<string> split(string s)
{
    istringstream buf(s);
    istream_iterator<string> beg(buf), end;
    vector<string> list(beg, end);
    return list;
}

bool isvowel(char c)
{
    string s = "aeiouAEIOU";
    if (find(s.begin(), s.end(), c) != s.end())
        return true;
    return false;
}
const ll INF32=2e9;
const ll N = 5e4 + 4;

///a%b=a-b*(a/b);

ll stringmod(string str, ll mod){
    ll curmod=0;
    for(int i=0; i<str.size(); i++){
        int digit = str[i]-'0';
        curmod=((curmod*10)%mod + digit%mod)%mod;
    }
    return curmod;
}
void solve()
{
       char num[100];
       ll bajok, bagses=0;

       int carry=0;
       cin >> num >> bajok;

       int l = strlen(num);
       int print_done=0;
       cout << "Bhagfol : ";
       for(int i=0; i<l; i++)
       {
         bagses=((bagses*10)+(num[i]-'0'));
         if(bagses<bajok && !print_done)continue;
         cout << bagses/bajok;
         print_done=1;
         bagses=bagses%bajok;
       }
       cout << "\nbagses : " << bagses << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
     //freopen("in.txt", "r", stdin);
     //freopen("out.txt", "w", stdout);
#endif
    solve();
    return 0;
}
