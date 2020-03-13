/**************
Author : Md. Foysal Ahammed
---------------------------------
!cse dept. && failure student
love & passion about programming
*****************/
#include <bits/stdc++.h>
#include <sstream>
#include <fstream>
//boost library
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
/*
mp::cpp_int fact(mp::cpp_int a)
{
    if(a==1)
        return 1;
    if(a==0)
        return 0;
    return a * fact(a-1);
}
*/
//v1 = rand() % 100;         // v1 in the range 0 to 99
//v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
//v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014
#define sort_array(arr)    *std::min_element(arr+1, arr+n)
#define max_array(arr)    *std::max_element(arr+1, arr+n)
#define pi              2*acos(0.0)
#define all(v)          v.begin(),v.end()
#define ff              first
#define se              second
#define pb              push_back
#define mp              make_pair
#define Sort(a)         sort(all(a))
#define RSort(a)        Sort(a), reverse(all(a))
#define sz(x)           (int)x.size()
#define max3(a,b,c)     max(a, max(b, c))
#define min3(a,b,c)     min(a, min(b, c))
#define maxall(v)       *max_element(all(v))
#define minall(v)       *min_element(all(v))
#define sq(a)           ((a) * (a))
#define abs(x)          (((x)<0)?-(x):(x))
#define precision(x)    cout << setprecision(x) << fixed
#define mem(a,v)        memset(a, v, sizeof(a))
#define fillAra(a,n,v)  fill(a, a+n, v)
#define fillVec(a, v)   fill(all(a), v)
#define countOne(a)     __builtin_popcount(a)
#define parity(a)       __builtin_parity(a)
#define btz(a)          __builtin_ctz(a)
#define gf              << ' ' <<
#define nl              << '\n'
#define cinIg           cin.sync(); cin.get()
#define FasterIO        ios_base::sync_with_stdio(false);cin.tie(NULL)
#define TestCases       int cases, tc; sfi(tc); for(cases=1; cases<=tc; cases++)
#define TestCasespp     int cases, tc; cin>>tc; for(cases=1; cases<=tc; cases++)
#define un(a)           Sort(a), (a).erase(unique(all(a)),a.end())
#define common(a,b)     Sort(a), Sort(b), a.erase(set_intersection(all(a), all(b), a.begin()), a.end())
#define uncommon(a,b)   Sort(a), Sort(b), a.erase(set_symmetric_difference(all(a), all(b), a.begin()), a.end())

#define SET(x,y)        x |= (1 << y)
#define CLEAR(x,y)      x &= ~(1<< y)
#define READ(x,y)       ((0u == (x & (1<<y)))?0u:1u)
#define TOGGLE(x,y)     (x ^= (1<<y))
#define pb              push_back
#define mp              make_pair
#define ll              long long
#define pll             pair<long long, long long>
#define REP(i,n)        for(int i=0;i<(n);i++)
#define FOR(i,a,b)      for(int i=(a);i<(b);i++)
#define FORI(i,a,b)     for(int i=(a);i<=(b);i++)
#define FORR(i,n)       for(int i=(n);i>=0;i--)
#define CL(a,b)         memset(a,b,sizeof(a))
#define sqr(x)          ((x)*(x))
#define intLIMIT        numeric_limits<int>
#define longLIMIT       numeric_limits<long long>
#define GCD(a,b)        __gcd((a),(b))
#define dbl(x)          (double)(x)
#define vi              vector <int>
#define vii             vector < pair <int, int> >
#define vll             vector <long long>
#define allof(x)        (x).begin(), (x).end()
#define larger(x,v)     x=max((x),(v))
#define smaller(x,v)    x=min((x),(v))
#define scanUnsigned(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
#define printArr(a,l) cout<<#a<<": ";for(int i=0;i<(l);i++){cout<<a[i]<<" ";}cout<<endl
#define print2dArr(a,r,c) cout<<#a<<":\n";for(int i=0;i<(r);i++){for(int j=0;j<(c);j++){cout<<a[i][j]<<" ";}cout<<endl;}
#define U64 unsigned long long
#define line "\n"
#define ft first
#define sd second
#define openfiles ifstream cin ("input.txt"); ofstream cout ("output.txt");
#define INF 1000010000
#define INFLL 10000000000000000
#define in insert
#define EPS ld(0.00000000001)
#define fastlast (n[0]-48)+(n[n.length()-1]-48)
#define MOD 1000000007mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define foreach(e, x) for (__typeof(x.begin()) e = x.begin(); e != x.end(); e++)
#define forit(it,S) for(__typeof(S.begin()) it = (S).begin(); it != (S).end(); it++)
#define LIM1 1000001 bitset<LIM1> isp; vi primes; inline void seive(){isp.set();isp.reset(0);isp.reset(1);for(int i=2;i*i<LIM1;i++)if(isp[i]){for(int j=i<<1;j<LIM1;j+=i)isp.reset(j);}repl(i,2,LIM1)if(isp[i]){primes.pb(i);}}

/**------- Scanf----------*/

#define si(n)           scanf("%d",&n)
#define sf(n)           scanf("%f",&n)
#define sl(n)           scanf("%lld",&n)
#define slu(n)          scanf("%llu",&n)
#define ss(n)           scanf("%s",n)
#define pnl             printf("\n")

#define sfc(a)             scanf("%c", &a)
#define sfl(a)             scanf("%lld", &a)
#define sfu(a)             scanf("%llu", &a)
#define sfs(a)             scanf("%s", a)
#define sfd(a)             scanf("%lf", &a)
#define sfii(a, b)         scanf("%d %d", &a, &b)
#define sfll(a, b)         scanf("%lld %lld", &a, &b)
#define sfuu(a, b)         scanf("%llu %llu", &a, &b)
#define sfdd(a, b)         scanf("%lf %lf", &a, &b)
#define sfiii(a, b, c)     scanf("%d %d %d", &a, &b, &c)
#define sflll(a, b, c)     scanf("%lld %lld %lld", &a, &b, &c)
#define sfuuu(a, b, c)     scanf("%llu %llu %llu", &a, &b, &c)
#define sfddd(a, b, c)     scanf("%lf %lf %lf", &a, &b, &c)

/**------- Printf----------*/
#define pf                 printf
#define pfig(a)            pf("%d ", a)
#define pfgap              pf(" ")
#define pfi(a)             printf("%d\n", a)
#define pfc(a)             printf("%c\n", a)
#define pfl(a)             printf("%lld\n", a)
#define pfu(a)             printf("%llu\n", a)
#define pfs(a)             printf("%s\n", a)
#define pfd(a)             printf("%.2lf\n", a)
#define pfii(a, b)         printf("%d %d\n", a, b)
#define pfll(a, b)         printf("%lld %lld\n", a, b)
#define pfuu(a, b)         printf("%llu %llu\n", a, b)
#define pfdd(a, b)         printf("%.2lf %.2lf\n", a, b)
#define pfiii(a, b, c)     printf("%d %d %d\n", a, b, c)
#define pflll(a, b, c)     printf("%lld %lld %lld\n", a, b, c)
#define pfuuu(a, b, c)     printf("%llu %llu %llu\n", a, b, c)
#define pfddd(a, b, c)     printf("%.2lf %.2lf %.2lf\n", a, b, c)
#define pnl                printf("\n")

/**--------File------------*/
#define output             freopen("output.txt","w",stdout)
#define input              freopen("input.txt","r",stdin)
#define inOut              input; output
#define Case               printf("Case %d: ", cases)
#define Casepp             cout << "Case " << cases << ": "

/**--------Constant------------*/
#define mx2                101
#define mx3                1001
#define mx4                10001
#define mx5                100001
#define mx6                1000001
#define eps                1e-8

/**--------Loops--------------*/
#define frab(i, a, b)      for(__typeof(b) i=(a); i<=(b); i++)
#define fr0(i, n)          frab(i, 0, n-1)
#define fr1(i, n)          frab(i, 1, n)
#define rfrab(i, a, b)     for(__typeof(b) i=(b); i>=a; i--)
#define rfr0(i, n)         rfrab(i, (n)-1, 0)
#define rfr1(i, n)         rfrab(i, n, 1)
#define frabv(i, a, b, v)  for(__typeof(b) i=(a); i<=(b); i+=v)
#define rfrabv(i, a, b, v) for(__typeof(b) i=(b); i>=a; i-=v)
#define frstl(i, s)        for(__typeof((s).end()) i=(s).begin(); i != (s).end(); i++)

/**-------Upper & Lower Bound-------*/
#define LB(a, v)            (lower_bound(all(a), v))
#define UB(a, v)            (upper_bound(all(a), v))

/**--------DeBug------------*/
#define watch(x)            cout<<(#x)<<" is "<<x<<"\n"
#define chk                 cout<<"Wtf"<<"\n"

/**Define Bitwise operation**/
#define check(n, pos) (n & (1<<(pos)))
#define biton(n, pos) (n | (1<<(pos)))
#define bitoff(n, pos) (n & ~(1<<(pos)))
#define allbitoff(n, pos) (x & (1<<k)-1) ///k tomo bit jamon ace tamon rekha baki bit off kore diya

/**Define memory set function**/
#define mem(x,y) memset(x,y,sizeof(x))
#define CLEAR(x) memset(x,0,sizeof(x))

using namespace std;

/**------- ShortCuts----------*/
typedef unsigned long long    ull;
typedef double                db;
typedef long double           ldb;
typedef pair<int, int>        pii;
//typedef pair<ll, ll>          pll;
typedef pair<int, pii>        iii;
//typedef vector<int>           vi;
typedef vector<ll>            vl;
//typedef vector<pii>           vii;
typedef vector<iii>           viii;
typedef vector<vi>            vvi;
typedef map<int, int>         mapii;
typedef map<int, bool>        mapib;
typedef map<int, string>      mapis;
typedef set<int>              seti;

/**------- Char Chk----------*/
inline bool isLow(char ch){if(ch>='a' && ch<='z') return true; return false;}
inline bool isUpp(char ch){if(ch>='A' && ch<='Z') return true; return false;}
inline bool isDig(char ch){if(ch>='0' && ch<='9') return true; return false;}

/**------- Double Chk----------*/
inline bool are_equal(db a, db b){return fabs(a-b)<numeric_limits<db>::epsilon();}
inline bool greater_than(db a, db b){return (a-b) > ((fabs(a)<fabs(b)?fabs(b):fabs(a)) * numeric_limits<db>::epsilon());}
inline bool less_than(db a, db b){return (b-a) > ((fabs(a)<fabs(b)?fabs(b):fabs(a)) * numeric_limits<db>::epsilon());}



ll power(ll a, ll b){ll res = 1; while(b){if(b & 1) res *= a; a = sq(a); b >>= 1;} return res;}
ll bigmod(ll a, ll b, ll m) {ll res = 1; while(b) { if(b & 1) { res = ( (res % m) * (a % m) ) %m ; } a= ((a%m) * (a%m)) %m; b >>= 1; } return res; }
ll modInverse(ll a, ll m) {return bigmod(a,m-2,m);}


/*
lli Fastpowercalc(lli a, lli n, lli mod)
{
    if(n==0)return 1;
    lli ret=Fastpowercalc(a, n/2, mod);
    ret=(ret*ret)%mod;

    if(n%2==1)ret=(ret*a)%mod;
    return ret;
}
lli modularInversefast(lli n, lli mod){
    return Fastpowercalc(n, mod-2, mod);
}
*/

/*toiton*/
#define LIM4 1000001 int phi[LIM4]; void totient(){repl(i,1,LIM4)phi[i]=i;tr(primes,it)for(int i=*it;i<LIM4;i+=*it)phi[i]-=phi[i]/(*it);}

/**------- Functions ---------*/
template<typename T> string toString(T x){stringstream ss; ss<<x; return ss.str();}
template<typename T> T SOD(T n){__typeof(n) sum=0, i=1; for(; i*i<=n; i++) sum += (n%i)?0:((sq(i)==n)?i:i+n/i); return sum;}

template<typename T>ostream& operator << (ostream& os, const vector<T> &v){os << "["; for(int i=0; i<v.size(); i++){ os << v[i]; if(i != sz(v)-1) os << ", ";} os << "]"; return os;}
template<typename T>ostream& operator << (ostream& os, const set<T> &v){ os << "["; for(auto it : v){os << it;if(it != *v.rbegin())os << ", ";}os << "]";return os;}
template<typename T, typename S> ostream& operator << (ostream& os, const map<T, S> &v){for(auto it : v) os << it.ff << " : " << it.se nl; return os;}
template<typename T, typename S> ostream& operator << (ostream& os, const pair<T, S> &v){os << "(" << v.ff << ", " << v.se << ")";return os;}

bool Finish_read;
template<class T>inline void read(T &x){Finish_read=0;x=0;int f=1;char ch=getchar();while(!isdigit(ch)){if(ch=='-')f=-1;if(ch==EOF)return;ch=getchar();}while(isdigit(ch))x=x*10+ch-'0',ch=getchar();x*=f;Finish_read=1;}
template<class T>inline void print(T x){if(x/10!=0)print(x/10);putchar(x%10+'0');}
template<class T>inline void writeln(T x){if(x<0)putchar('-');x=abs(x);print(x);putchar('\n');}
template<class T>inline void write(T x){if(x<0)putchar('-');x=abs(x);print(x);}
template <class T> inline T bigMod(T p, T e, T M){ T ret = 1; for(; e > 0; e >>= 1){ if(e & 1) ret = (ret * p) % M; p = (p * p) % M; } return (T) ret;}
template <class T> inline T modInverse(T a,T M){return bigMod(a,M-2,M);}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
template <class T> inline T lcmm(T a, T b){Finish_read=0;}

//int to string ....tostring();
template <typename T>string to_string(const T& thing){stringstream ss;ss << thing;return ss.str();}
template <> string to_string<string>(const string& s){return s;}


/*
ll power(ll a, ll b){ll res = 1; while(b){if(b & 1) res *= a; a = sq(a); b >>= 1;} return res;}
ll bigmod(ll a, ll b, ll m) {ll res = 1; while(b) { if(b & 1) { res = ( (res % m) * (a % m) ) %m ; } a= ((a%m) * (a%m)) %m; b >>= 1; } return res; }
ll modInverse(ll a, ll m) {return bigmod(a,m-2,m);}
*/

//BigMod
U64 modmult(U64 a, U64 b, U64 m){if (!a || a<m/a)return (a*b) % m;U64 sum = 0;while (b){if (b&1)sum = (sum+a) % m;a=(a+a)%m;b>>=1;}return sum;}
U64 mod(U64 a, U64 b, U64 m){U64 res=1, y=a%m;while (b){if(b&1)res = modmult(res, y, m);y=modmult(y, y, m);b>>=1;}return res;}
//uint64_t pow_mod(uint64_t a, uint64_t b, uint64_t m){uint64_t r = m==1?0:1; while (b > 0) {if(b & 1)r = mul_mod(r, a, m);b = b >> 1; a = mul_mod(a, a, m);}return r;} ///a^b mod p
typedef unsigned long long ull;
typedef long double ld;
template <typename T> inline T const& Maximum(T const& a, T const& b){return a<b?b:a;}
template <class T>T gcd_2(T a, T b){if(a==0)return b;return gcd(b%a, a);}
template <class T>T lcmm2(T a, T b){return (a/gcd(a, b))*b;}
int find_last_zero(int n){int cnt=0;for(int i=5; n/i>=1; i=i*5){cnt=cnt+n/i;}return cnt;}
void rev(char *str){if(*str){rev(str+1);printf("%c", *str);}}
void rev1(string& str){
  int n = str.length();
  for(int i=0; i<n/2; i++){
    swap(str[i], str[n-i-1]);
  }
}
void rev1(string& str)
{
    int n = str.length();
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
//int Binary_search(vector<int> &a, int query){int left = 0, right = a.size() - 1;while (left < right){int middle = (left + right)/2;if (a[middle) < query) {left = middle + 1;} else {right = middle;}}if (a[left] == query) {return left;}return -1;}

vector <int> prime;
vector <ll> p;
int List[1280]; ///save the list
int Listsize;  ///saves the size of List
long long int mx=1e6;
void simple_siv(){bool mark[mx+1];memset(mark, true, sizeof(mark));mark[0]=false;mark[1]=false;for(int i=2;i*i<=mx;i++){if(mark[i]==true){
for(long long int j=i*i; j<=mx; j+=i)mark[j]=false;}}for(long long int i=2; i<mx; i++){if(mark[i]==true){prime.push_back(i);}}}

void siv(){ll isprime[mx+1];for(ll i=2; i<=mx; i++){if(isprime[i]==0){p.push_back(i);for(long long j=2; j*j<=mx; j++){isprime[i*j]=1;}}}}

/*
typedef vector <ll> vll;

const int N=100100;
bitset<N> isprime, rangeprime;
vll primes;

void seive(){isprime.set();if(ll i=2; i<N; i++){if(isprime[i]){for(ll j=i*i; j<N; j+=i){isprime[j];}}}for(ll i=2; i<N; i++){
    if(isprime[i])primes.push_back(i);}}

void segment_siv(ll l, ll r)
{rangeprime.set();if(l<=1)l=2;for(ll i=0; primes[i]*primes[i]<=r; i++){for(ll j=max(primes[i]*2, prime[i]*((l-1)/primes[i])); j<=r; j+=primes[i]){
    rangeprime[j-1]=false;}}for(int i=1; i<=r; i++){if(rangeprime[i-1]){printf("%d\n", i);}}}

*/

//----------primne starts here-------------
bool marked[10000002];
void sieve(ll n){
    for(int i=3;i*i<=n;i+=2){
        if(marked[i]==false){
            for(int j=i*i;j<=n;j+=i+i){
                marked[j]=true;
            }
        }
    }
}
bool isprime(ll n){
    if(n<2)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    return marked[n]==false;
}

vector<int> generatePrime(int n){
    sieve(n);
    vector<int>v;
    for(int i=1;i<=n;i++){
        if(isprime(i))v.push_back(i);
    }
    return v;
}

/**Shortcut input function**/
int read_int(){int n;scanf("%d",&n);return n;}
int read_LLD(){LLD n;scanf("%lld",&n);return n;}
inline int buffer_input() { char inp[1000]; scanstr(inp); return atoi(inp);}

int solve()
{
    int start_s = clock();
    //ofstream outfile("file.txt");
    //outfile << "1 1 1 1000" << endl; //test case check

    printf("\nTime :: %.2lf\n", (double)(end_s-start_s)/CLOCKS_PER_SEC);
}

int main ()
{
    FasterIO;
    #ifdef _online
    clock_t startTime = clock();
    freopen("input.txt", "r", stdin);
    #endif
    solve();
    #ifdef _online
    cout << endl << setprecision(20) << double(clock()-startTime)/(double)CLOCKS_PER_SEC << "second." << endl;
    #endif
    return 0;
}
