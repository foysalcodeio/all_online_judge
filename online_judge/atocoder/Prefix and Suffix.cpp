
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
 

 
void solve() {
	char s[123], t[123];
	int n, m;
	scanf("%d %d %s %s", &n, &m, s, t);

	bool isPre = 1;

	for(int i=0; i<n; i++){
	      if(s[i] != t[i]){
			isPre = 0;
			break;
		}
	}

	bool isSuf = 1;
	int j = m-1;
	
	for(int i=n-1; i>=0; i--){
		if(s[i] != t[j]){
			isSuf = 0;
			break;
		}
		j--;
	}
	if(isPre && isSuf) printf("0\n");
	else if(isPre) printf("1\n");
	else if(isSuf) printf("2\n");
	else printf("3\n");
	
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
