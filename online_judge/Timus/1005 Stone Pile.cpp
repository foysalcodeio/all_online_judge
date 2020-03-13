#include <bits/stdc++.h>
using namespace std;
int main ()
{
    vector <long long> v;
    long long a;
    while(cin >> a)v.push_back(a);
    for(int i=v.size()-1; i>=0; i--){
        printf("%.4lf\n", sqrt(v[i]));
        //cout<<setprecision(4)<<fixed<<sqrt(v[i])<<endl;
    }
    return 0;
}
