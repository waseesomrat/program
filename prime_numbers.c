#include <stdio.h>
#include <math.h>

int main() {
    int n, count = 0;

    scanf("%d", &n);

    for (int num = 2; num <= n; num++){
        int isprime = 1;

        for (int c = 2; c <= sqrt(num); c++){
            if (num % c == 0) {
                isprime = 0;
                break;
            }
        }

        if (isprime) {
            printf("%d ", num);
            count++;
        }
    }

    printf("\nTotal prime numbers: %d\n", count);

    return 0;
}
