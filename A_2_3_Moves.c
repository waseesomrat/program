#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
    int n;
    scanf("%d", &n);
    int w;
    if (n % 3 == 0) {
        w = n / 3;
        } else if (n % 3 == 1) {
            if (n == 1) {
                w = 2; }
    else {
    w = 2 + (n - 4) / 3;
            }
        } else { 
            w = 1 + (n - 2) / 3;
        }
        printf("%d\n", w);
    }
    return 0;
}