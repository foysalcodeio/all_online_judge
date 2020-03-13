#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   // freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int cnt = 1;
    while(1)
    {
    char input[100];

    cin >> input;

    if(strcmp(input, "*")==0) return 0;

    cout << "Case "<<cnt++<<": ";
    if(strcmp(input, "Hajj")==0){
        cout << "Hajj-e-Akbar"<<endl;
    }
    else{
        cout << "Hajj-e-Asghar"<<endl;
    }

    }

}
