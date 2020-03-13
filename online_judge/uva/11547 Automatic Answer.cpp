*/
/*============
Autor : md. Foysal ahammed
University : Eastern University of Bangladesh
*/
#include <bits/stdc++.h>
const double PI = acos(-1.0);
const double EPS = 1e-6;
const int MOD = (int)1e9+7;
const int maxn = (int)1e5+5;
const int LOGN = 20;

using namespace std;
int main() {

    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int t, n;
	cin >> t;
	while(t--)
    {
        cin >> n;
        int res, eq = (((((n*567)/9)+7492)*235)/47)-498;
        eq /= 10;
        res = eq % 10;
        cout << abs(res) << endl;
    }
	return 0;
}
