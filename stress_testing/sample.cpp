#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define vec_p vector<pair<int, int>>
#define v vector<int>

struct testcase {
    int a, n, d;
};

int randomNumber(int a, int b) {
    if (a > b) swap(a, b); // Ensure a <= b
    return a + rand() % (b - a + 1);
}

testcase generateTestCase() {
    testcase randomTest;
    randomTest.a = randomNumber(1, 1000);
    randomTest.n = randomNumber(1, 1000);
    randomTest.d = randomNumber(-1000, 1000);
    return randomTest; // Add return statement
}

int bruteForce(testcase T) {
    int ret = 0; // Initialize the result
    int currentTerm = T.a; // Start with the first term
    for (int i = 0; i < T.n; i++) {
        ret += currentTerm; // Add the current term to the result
        currentTerm += T.d; // Move to the next term
    }
    return ret; // Return the computed sum
}

int optimizedSolution(testcase T) {
    // Using the formula for sum of an AP
    int ret = T.n * (2 * T.a + (T.n - 1) * T.d) / 2;
    return ret; // Return the computed result
}

void debugger() {
    testcase random = generateTestCase();
    cout << "Testing: a = " << random.a << ", n = " << random.n << ", d = " << random.d << endl; // Logging
    int ans1 = bruteForce(random);
    int ans2 = optimizedSolution(random);
    if (ans1 != ans2) {
        cout << "Discrepancy found!" << endl;
        cout << "a: " << random.a << ", n: " << random.n << ", d: " << random.d << endl;
        cout << "Brute Force: " << ans1 << ", Optimized: " << ans2 << endl;
        exit(0); // Stop the program for debugging
    }
    cout << "Passed: " << ans1 << " == " << ans2 << endl; // Log passing test cases
}

int32_t main() {
    srand(time(0)); // Initialize random seed
    int t = 1000;   // Number of test cases
    while (t--) {
        debugger();
    }
    cout << "All test cases passed!" << endl;
    return 0;
}
