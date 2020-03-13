/*============
Autor : md. Foysal ahammed
University : Eastern University of Bangladesh
*/
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
        else{
            int cnt = 0;
            if(a[0]=='o') cnt++;
            if(a[1]=='n') cnt++;
            if(a[2]=='e') cnt++;

            if(cnt >= 2) cout << "1" <<endl;
            else cout <<"2"<<endl;
        }
    }
    return 0;
}
