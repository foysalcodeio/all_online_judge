
///https://codeforces.com/contest/26/problem/A

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
typedef long long ll;

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

bool ischeck(int n)
{
    vector<int>value;
    int cp=n;
    for(int i=2; i*i<=cp; i++)
    {
        if(n%i==0){
            value.push_back(i);
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n>1)value.push_back(n);
    return value.size()==2;
}

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int cnt=0;
    for(int i=1; i<=n; i++){
        cnt+=ischeck(i);
    }
    cout << cnt << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    solve();
    return 0;
}
