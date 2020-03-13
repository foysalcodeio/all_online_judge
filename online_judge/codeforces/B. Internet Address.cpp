///https://codeforces.com/contest/245/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    if(str[0]=='h' && str[1]=='t' && str[2]=='t' && str[3]=='p')
    {
        for(int i=0; i<4; i++){
            str.erase(str.begin());
        }
        cout << "http";
    }
    else{
        for(int i=0; i<3; i++){
            str.erase(str.begin());
        }
        cout << "ftp";
    }
    cout << "://";
    int k=0;
    while(1)
    {
        if(str[0]=='r' && str[1]=='u' && k==1){
            break;
        }
        k=1;
        cout << str[0];
        str.erase(str.begin());
    }
    cout << ".ru";
    str.erase(str.begin());
    str.erase(str.begin());
    if(!str.empty()){
        cout << "/"<<str;
    }
    return 0;
}
