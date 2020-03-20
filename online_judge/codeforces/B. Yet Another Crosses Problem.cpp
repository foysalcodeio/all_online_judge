///https://codeforces.com/contest/1194/problem/B

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


void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector <string> str(n);

        for(int i=0; i<n; i++){
            cin >> str[i];
        }

        vector <int> cnt_n(n), cnt_m(m);

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cnt_n[i]=cnt_n[i]+(str[i][j]=='.');
                cnt_m[j]=cnt_m[j]+(str[i][j]=='.');
            }
        }
        int ans=n+m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans=min(ans, cnt_n[i]+cnt_m[j] - (str[i][j]=='.'));
            }
        }
        cout << ans << endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
#endif
    solve();
    return 0;
}
