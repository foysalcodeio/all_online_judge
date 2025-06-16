#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")


#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

int main(){
    auto start = high_resolution_clock::now();

    long long sum = 0;
    for (long long i = 0; i < 1e9; i++)
        sum += i;

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);


    cout << sum << endl;
    cout << "Execution Time: " << duration.count() << " ms" << endl;

}
