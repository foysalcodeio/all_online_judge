#include <bits/stdc++.h>
using namespace std;

pair <int, int> extended_gcd(int a, int b){
    if(b==0){
        return {1, 1};
    }
    auto[x2, y2] = extended_gcd(b, a%b);
    int x, y;
    x=y2;
    y=x2-(a/b)*y2;
    return{x, y};
}


int main(){
ios::sync_with_stdio(0); cin.tie(0);
auto start = std::chrono::high_resolution_clock::now();
auto stop = std::chrono::high_resolution_clock::now();
auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
start = std::chrono::high_resolution_clock::now();


int a, b;
cin >> a >> b;
auto [x, y] = extended_gcd(a, b);
cout << x << ' ' << y;


stop = std::chrono::high_resolution_clock::now();
duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
return 0;
}
