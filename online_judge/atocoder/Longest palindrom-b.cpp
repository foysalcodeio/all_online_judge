
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);


char str[123];
bool checkPal (int l, int r)
{
	while(l<r){ // that means half operation
		if(str[l]!=str[r])return 0;
		l++, r--;		
	}
	return 1;
}
 
void solve() {
	scanf("%s", str);
	int n = strlen(str);
	int ans=1;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(checkPal(i, j))ans=max(ans, j-i+1);
		}
	}
	cout << ans << '\n';	
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
