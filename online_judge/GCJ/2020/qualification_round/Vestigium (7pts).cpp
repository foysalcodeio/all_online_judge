///https://codingcompetitions.withgoogle.com/codejam/round/000000000019fd27/000000000020993c
#include <bits/stdc++.h>
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
	*this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

int grid[1005][1005];

void test()
{
    int n;
    scanf("%d", &n);
    vector <set<int>>row(n+1), col(n+1);
    long long trace=0;
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
            scanf("%d", &grid[i][j]);
            row[i].insert(grid[i][j]);
            col[j].insert(grid[i][j]);

            if(i==j){
                trace=trace+grid[i][j];
            }
        }
    }
    int bad_row=0, bad_col=0;
    for(int r=1; r<=n; ++r){
        if((int)row[r].size()!=n){
            ++bad_row;
        }
        if((int)col[r].size()!=n){
            ++bad_col;
        }
    }
    printf("%lld %d %d\n", trace, bad_row, bad_col);
}
int main ()
{
    int t;
    scanf("%d", &t);
    for(int f=1; f<=t; ++f){
        printf("Case #%d: ", f);
        test();
    }
}
