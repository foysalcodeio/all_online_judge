///wilson theorem : details - https://en.wikipedia.org/wiki/Wilson%27s_theorem
///print prime number in range

#include <bits/stdc++.h>
using namespace std;

void prime_in_range(int n)
{
    int fact=1;
    for(int k=2; k<n; k++){
        fact=fact*(k-1);
        if((fact+1)%k==0){
            cout << k << endl;
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    prime_in_range(n);
}

int main ()
{
    #ifdef _online judge
  //  freopen("input.txt", "r", stdin);
    #endif // _online
    solve();
    return 0;
}
