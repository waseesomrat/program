#include <stdio.h>
int dec_to_bin(int d) {
    int bin = 0;
    while (d > 0) {
        bin = bin * 10 + (d % 2);
        d = d / 2;
    }
    return bin;
}
int bin_to_dec(int b) {
    int dec = 0;
    while (b > 0) {
        dec = dec * 2 + (b % 10);
        b = b / 10;
    }
    return dec;
}
int main() {
    int d, b;
    printf("Enter decimal number: ");
    scanf("%d", &d);
    printf("Enter binary number: ");
    scanf("%d", &b);
    printf("Binary value: %d\n", dec_to_bin(d));
    printf("Decimal value: %d\n", bin_to_dec(b));
    return 0;
}
