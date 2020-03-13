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
    char input[100];
    int sum = 0, x;
    while(T--)
    {
        cin >> input;
        if(strcmp(input, "donate")==0)
        {
            cin >> x;
            sum = sum + x;
        }else{
            cout << sum <<"\n";
        }
    }
    return 0;
}
