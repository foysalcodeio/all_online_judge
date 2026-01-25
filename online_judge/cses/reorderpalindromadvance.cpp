
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);


 
void solve() {
	string str;
	cin >> str;
	map<char, int>m;
	for(char c : str){
		m[c]++;
	}
	int odd_count=0;
	for(auto p : m){
		if(p.second%2==1){
			odd_count++;
		}
	}
	
	if(odd_count>1){
		cout << "NO SOLUTION" << endl;
		return;
	}
	
	string start, mid, end;
	for(auto p : m){
		string str(p.second/2, p.first);
		start += str;
		end += str;
		if(p.second%2==1){
			mid=p.first;
		}
	}
	reverse(end.begin(), end.end());
	cout << start << mid << end << endl;	
	
	
	
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
