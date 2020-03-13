#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int T, ct, n, downs;
    ct = 1;
    cin >> T;
    while(ct<=T)
    {
       int ups = 0, downs = 0;
       vector <int> v;
       cin >> n;
       for(int i=0; i<n; i++)
       {
           int x;
           cin >> x;
           v.push_back(x);

       }
       for(int j=0; j<n-1; j++){
        if(v[j]<v[j+1])
            downs++;
        if(v[j]>v[j+1])
            ups++;
        if(v[j]==v[j+1])
            continue;
       }
       cout << "Case "<<ct<<": "<<ups<< " " << downs << endl;
       ct++;
       v.clear();
    }
    return 0;
}
