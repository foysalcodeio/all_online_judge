
## D3bug processing system

### Testing code 1
```
```

#Testing code 2
```
```


### Random Code generating
```
#include <bits/stdc++.h>
using namespace std;
#define ll long long

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

inline ll gen_random(ll l, ll r) {
    return uniform_int_distribution<ll>(l, r)(rng);
}
int main() {
    ios::sync_with_stdio(false);    
    cin.tie(nullptr);

    // Example usage for integer
    // cout << "Random Integer: " << gen_random(1, 10) << endl;

	freopen("in.txt", "w", stdout);
	

	int n = gen_random(1, 5);
	cout << n << endl;
	for(int i=0; i<n; i++){
		cout << gen_random(-20, 20) << " ";
	}
	cout << endl;
    // Example usage for real number
   // cout << "Random Real Number: " << gen_random(1.0, 10.0) << endl;

    return 0;
}
```

### Checker.sh
```
for((i = 1; ; ++i)); do
    echo $i
    ./gen $i > in.txt
    diff -w <(./testcode1 < in.txt) <(./testcode2 < in.txt) || break
done
 
```
