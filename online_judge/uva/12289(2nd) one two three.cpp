/*==================================
Autor : md. Foysal ahammed
University : EUB
==============*/
#include <bits/stdc++.h>
using namespace std;
int main ()
{

    int n;
    cin >> n;
    while(n--)
    {
        string a;
        cin >> a;
        if(a.length()==5) cout << "3" << endl;

        else if((a[0]=='o' && a[1]=='n')||
                (a[0]=='o' && a[1]=='e')||
                (a[1]=='n' && a[2]=='e')||
                (a[0]=='o' && a[2]=='n')||
                (a[0]=='o' && a[2]=='n'))
                cout << "1" <<endl;
        else cout << "2" << endl;
    }
    return 0;
}
