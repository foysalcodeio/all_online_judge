///https://codeforces.com/contest/219/problem/A
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int k;
    cin >> k;
    string str;
    cin >> str;
    vector <int> cnt(26, 0);
    int n = str.size();

    for(int i=0; i<n; i++){
        cnt[str[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(cnt[i]%k!=0){
            cout << -1 << endl;
            return 0;
        }
        else{
            cnt[i]=cnt[i]/k;
        }
    }

    for(int f=0; f<k; f++){
        for(int i=0; i<26; i++){
        ///cnt[i]=how many word / single word number
            for(int j=0; j<cnt[i]; j++){
                cout << char(i+97);
            }
        }
    }
    return 0;
}
