// Codeforces Round 1069 (Div. 2) - max - min using set 
#pragma GCC optimize("Ofast,unroll-loops,fast-math")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#include <chrono>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
 
 
using ll = long long;
#define int long long
using pii = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
 
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
 
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
 
 
const int INF = 1e18;
const int MOD = 1e9 + 7;
 
 
void solve() {
  // main code start
	ll n;
	cin >> n;
	// unordered_set<ll>colors; // that means remove duplicate number and sorted adjecent 
	set<ll>colors;
	for(ll i=0; i<n; i++){
		ll x;
		cin >> x;
		colors.insert(x);
	}
	ll k = colors.size(); 
	ll ceil = ll(1e18);
	/*
	for(auto data : colors){
		cout <<"output data is " <<  data << endl;
	}*/
		
	for(auto data : colors){
		if(data >= k) ceil = min(ceil, data); 
	}
	if(ceil == ll(1e18)) ceil = k;
	cout << ceil << endl;
     
	
}
int32_t main() {
 
    fastio;
    
    auto start = high_resolution_clock::now();
    
    int t;
    cin >> t;
    while (t--) {
        solve();    
    }
    
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(end - start);
    
    return 0;   
}
