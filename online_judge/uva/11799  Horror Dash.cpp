#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int T, c=1, N;
    cin >> T;
    while(c<=T)
    {
        cin >> N;
        int max_s = 0;
        while(N--)
        {
            int x;
            cin >> x;
            max_s = max(max_s, x);
        }
        cout << "Case " << c << ": " << max_s << endl;
        c++;
    }
    return 0;
}
