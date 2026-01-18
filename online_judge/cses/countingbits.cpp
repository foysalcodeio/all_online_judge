
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
 

 
void solve() {
	long long n;
	cin >> n;

	n++;

	long long grp = 2;  /// 0,1
	long long ans = 0;

	// this step action is every column bit check {....,8,4,2,1}
	while(n > (grp/2)){    /// n>grp/2 = n*2 > grp  // every column count half bit /// n = 14 grp = 2, 14>1
		// this section 1 possition - 2 bit
		long long d = n / grp; /// d = 14 / 2 = 7 ta group
		ans+= d * (grp/2); // get 1 // if group 1 -> (0, 1) if group 2 -> (0,0,1,1) if group  /// 7 * (2(bit)/2) = 7 * 1 = 7, ans = 0, ans=0+7 = 7


		long long partial = n % grp; // 14 % 8 = 6
		partial -= (grp/2); // every group half bit 0 and half bit 1 /// 6-4 = 2

		if(partial>0){
			ans+=partial;
		}

		// this section increase pos like 2 possition - 4 bit, 3 possition 8 bit
		grp*=2; // increase group   // operation log(n)
	}
	cout << ans << endl;
	
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
