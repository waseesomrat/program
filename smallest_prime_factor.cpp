#include <iostream>
using namespace std;

const int N = 21;
int spf[N];

void sieve_spf() {
    // init
    for (int i = 0; i < N; i++) spf[i] = i;
    spf[0] = 0;
    if (N > 1) spf[1] = 1;

    // build smallest prime factor table
    for (int i = 2; i < N; i++) {
        if (spf[i] == i) { // i is prime
            for (int j = 2 * i; j < N; j += i) {
                if (spf[j] == j) spf[j] = i; // set smallest prime factor
            }
        }
    }
}

int main() {
    sieve_spf();

    // demo: print spf for 2..20
    for (int x = 2; x < N; x++) {
        cout << x << " -> spf = " << spf[x] << "\n";
    }
    return 0;
}