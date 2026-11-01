#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    while (x--) {
        int n;
        long long c, k;
        scanf("%d %lld %lld", &n, &c, &k);
        long long p[100];
        int i, j;
        for (i = 0; i < n; i++) {
            scanf("%lld", &p[i]);
        }
        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n; j++) {
                if (p[i] > p[j]) {
                    long long t = p[i];
                    p[i] = p[j];
                    p[j] = t;
                }
            }
        }
        for (i = 0; i < n; i++) {
            if (p[i] <= c) {
                long long q = c - p[i];
                long long r;
                if (k < q) {
                    r = k;
                } else {
                    r = q;
                }
                p[i] += r;
                k -= r;
                c += p[i];
            } else {
                break;
            }
        }

        printf("%lld\n", c);
    }
    return 0;
}