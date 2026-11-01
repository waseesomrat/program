#include <iostream>
using namespace std;

const int N = 5000000;
int spf[N];

void sieve_spf() {
    for (int i = 0; i < N; i++) spf[i] = i;
    spf[0] = 0;
    if (N > 1) spf[1] = 1;
    for (int i = 2; i < N; i++) {
        if (spf[i] == i) {
            for (int j = 2 * i; j < N; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}
int main() {
    sieve_spf();
    for (int x = 2; x < N; x++) {
        cout << x << " -> spf = " << spf[x] << "\n";
    }
    return 0;
}