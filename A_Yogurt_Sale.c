#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);

        int cost;

        if (2 * a <= b) {
            cost = n * a;
        } else {
            cost = (n / 2) * b + (n % 2) * a;
        }

        printf("%d\n", cost);
    }

    return 0;
}
