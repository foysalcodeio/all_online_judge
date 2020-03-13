#include <bitset>
#include <vector>
#include <cstdio>
using namespace std;
typedef long long int ll;
ll sieve_size;
bitset<10000010> bs; // 10^7 should be enough for most cases
vector<int> primes;
void sieve(ll upperbound) {
    sieve_size = upperbound + 1;// add 1 to include upperbound
    bs.set();
    bs[0] = bs[1] = 0;
    for (ll i = 2; i <= sieve_size; i++) if (bs[i]) {
            for (ll j = i * i; j <= sieve_size; j += i) bs[j] = 0;
            primes.push_back((int)i);
        }
}

bool isPrime(ll N) {
    if (N <=sieve_size) return bs[N];
    for (int i = 0; i < (int)primes.size(); i++)
        if (N % primes[i] == 0) return false;
    return true;
}
int main() {
    sieve(100000);
    if(isPrime(10007)) {
        puts("prime");
    } else {
        puts("not prime");
    }
    return 0;
}
