#include <stdio.h>

int main() {
    int a, b, t;

    // Read number of test cases
    if (scanf("%d", &t) != 1) return 0;

    while (t--) {
        // Read the two numbers
        if (scanf("%d %d", &a, &b) != 2) break;

        // The Euclidean Algorithm
        while (b != 0) {
            int remainder = a % b;
            a = b;
            b = remainder;
        }

        // After the loop, 'a' holds the GCD
        printf("%d\n", a);
    }

    return 0;
}