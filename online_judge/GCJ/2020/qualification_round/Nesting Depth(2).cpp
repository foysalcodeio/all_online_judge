
#include <bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    int t, cs = 0;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int depth = 0;
        string ans;
        for(int i = 0; i < s.size(); i++) {
            int val = s[i] - '0';
            while(depth > val) {
                ans += ')';
                --depth;
            }
            while(depth < val) {
                ans += '(';
                ++depth;
            }
            ans += s[i];
        }
        while(depth--) ans += ')';
        cout << "Case #" << ++cs << ": " << ans << endl;
    }
    return 0;
}
