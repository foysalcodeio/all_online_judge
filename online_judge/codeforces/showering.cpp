// https://codeforces.com/contest/1999/problem/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);	

int t;
cin >> t;
while(t--)
{
  int n, s, m;
  cin >> n >> s >> m;
  vector <pair <int, int>>vec(n);
  for(int i=0; i<n; i++){
    int l, r;
    cin >> l >> r;
    vec[i] = {l, r};
  }
  int mx = vec[0].first;
  for(int i=1; i<n; i++){
    mx = max(mx, vec[i].first - vec[i-1].second);
    //cout << mx << '\n';
  }
  mx = max(mx, m - vec[n-1].second);
  if(mx>=s){
    cout << "yes" << '\n';
  }else{
    cout << "no" << endl;
  }
}
  return 0;
}
