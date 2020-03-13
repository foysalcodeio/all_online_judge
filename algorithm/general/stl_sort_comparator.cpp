/*
    stl sort - comparator
*/

#include <bits/stdc++.h>
#include<cstdio>
#include <queue>
#define pb push_back
#define mp make_pair
//Macro
#define eps 1e-9
#define pi acos(-1.0)
#define ff first
#define ss second
#define re return
#define QI queue
#define SI stack
#define SZ(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define sq(a) ((a)*(a))
#define distance(a,b) (sq(a.x-b.x) + sq(a.y-b.y))
#define iseq(a,b) (fabs(a-b)<eps)
#define eq(a,b) iseq(a,b)
#define ms(a,b) memset((a),(b),sizeof(a))
#define G() getchar()
#define MAX3(a,b,c) max(a,max(b,c))
#define II ( { int a ; read(a) ; a; } )
#define LL ( { Long a ; read(a) ; a; } )
#define DD ({double a; scanf("%lf", &a); a;})

double const EPS=3e-8;
using namespace std;

#define FI freopen ("input_B.txt", "r", stdin)
#define FO freopen ("output_B.txt", "w", stdout)

typedef long long Long;
typedef long long int64;


//For loop

#define forab(i, a, b) for (__typeof (b) i = (a) ; i <= b ; ++i)
#define rep(i, n) forab (i, 0, (n) - 1)
#define For(i, n) forab (i, 1, n)
#define rofba(i, a, b) for (__typeof (b)i = (b) ; i >= a ; --i)
#define per(i, n) rofba (i, 0, (n) - 1)
#define rof(i, n) rofba (i, 1, n)
#define forstl(i, s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define for1(i, a, b) for(int i=a; i<b; i++)

template< class T > T gcd(T a, T b) { return (b != 0 ? gcd(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd(a, b) * b); }
#define __(args...) {dbg,args; cerr<<endl;}

#define __1D(a,n) rep(i,n) { if(i) printf(" ") ; cout << a[i] ; }
#define __2D(a,r,c,f) forab(i,f,r-!f){forab(j,f,c-!f){if(j!=f)printf(" ");cout<<a[i][j];}cout<<endl;}

class person
{
public:
    person() : age(0){}
    person(int age, string name)
    {
        this->age=age;
        this->name=name;
    }
    int age;
    string name;
};

inline bool operator<(const person& a1, const person& a2)
{
    return a1.age < a2.age;
}



signed main ()
{
   ios_base :: sync_with_stdio(0);cin.tie(0);cin.tie(0);

    vector <person> vecperson;
    vecperson.push_back(person(24, "foysal"));
    vecperson.push_back(person(30, "forhad"));
    vecperson.push_back(person(28, "Ahammed"));

    sort(vecperson.begin(), vecperson.end());

    for(size_t i=0; i<vecperson.size(); i++)
    {
        cout << vecperson[i].age << " " << vecperson[i].name << endl;
    }
    return 0;
}
