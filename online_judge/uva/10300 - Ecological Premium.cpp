#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        while(n--)
        {
            long long area, blank, premium;
            cin >> area >> blank >> premium;
            sum = sum + area * premium;
        }
        cout << sum << '\n';
    }
    return 0;
}
