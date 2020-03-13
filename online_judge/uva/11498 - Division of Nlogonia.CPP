#include <bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, x, y, a, b;
    for(;;)
    {
        cin >> n;
        if(n==0) break;
        cin >> x >> y;
        while(n--)
        {
            cin >> a >> b;
            if(a==x || b==y) cout << "divisa";
            else if(a<x && b>y) cout <<"NO";
            else if(a>x && b>y) cout <<"NE";
            else if(a>x && b<y) cout <<"SE";
            else if(a<x && b<y) cout <<"SO";
            cout << endl;
        }
    }
    return 0;
}
