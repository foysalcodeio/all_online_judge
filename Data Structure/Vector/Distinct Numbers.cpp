
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
 

 
void solve() {
	
	long long n;
	cin >> n;
	vector<long long>arr;
	for(long long i=0; i<n; i++){
		int x;
		cin >> x;
		arr.push_back(x);
	}
	sort(arr.begin(), arr.end());
	int ans=0;
	for(long long i=0; i<n; i++){
		if(arr[i]!=arr[i+1]) ans+=1;
	}
	cout << ans << "\n";
 }


int main() {
 
	/*
    fastio;
    int t;
    cin >> t;
    while (t--) {
       solve();    
    } */
	solve();
    
    return 0;   
}
