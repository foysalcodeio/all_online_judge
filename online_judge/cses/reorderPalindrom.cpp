
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

char str[1000123];
int cnt[30];
 
void solve() {
	scanf("%s", str);
	int n = strlen(str);

	// intially 0
	//for(int i=0; i<26; i++)cnt[i]=0;

	for(int i=0; i<n; i++){
		cnt[str[i]-'A']++;
	}

	// print character
	/*
	for(int i=0; i<n; i++){
		if(cnt[i]>0){
			char ch = 'A' + i;
			printf("%c : %d\n", ch, cnt[i]);
		}
	}*/


	//odd store and substract odd
	int odd=0;
	char oddchar;
	for(int i=0; i<26; i++){
		if(cnt[i]%2==1){
			odd++; // how many odd are here 
			oddchar = i + 'A'; // index to charactor
			cnt[i]--; // decrease to cnt we want event possitive for add side
		}	
	}
	
	// operation and add new array
	int l = 0, r = n-1;
	for(int i=0; i<26; i++){
		//check even
		if(cnt[i]%2==0){
			//target half
			int halfcnt = cnt[i]/2;
			for(int j=0; j<halfcnt; j++){
				str[l] = i + 'A';
				str[r] = i + 'A';
				l++, r--;
			}
		}
	}

	if(odd>1){
		printf("NO SOLUTION");	
	}
	else{
		if(odd==1) str[(n/2)]=oddchar;
		for(int i=0; i<n; i++)printf("%c", str[i]);		
	}
	
}
	
	
int main() {
 
	fastio;
	/*
    
    int t;
    cin >> t;
    while (t--) {
       solve();    
    } */
	solve();
    
    return 0;   
}
