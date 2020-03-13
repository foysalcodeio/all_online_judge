#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;
    while(cin >> n && n!=0)
    {
        int tmp = n;
        while((tmp/10)>0)
        {
            int sum = 0;
            while(n>0)
            {
                sum = sum + n % 10;
                n = n / 10;
            }
            tmp = sum;
            n = tmp;
        }
        cout << tmp << endl;
    }
    return 0;
}
