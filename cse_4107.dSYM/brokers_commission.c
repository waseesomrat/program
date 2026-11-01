#include <stdio.h>

int main() {
    int tr;
    float com;

    printf("Enter trade amount: ");
    scanf("%d", &tr);

    // 1. Calculate base commission based on brackets
    if (tr < 2500) {
        com = tr * 0.017 + 30;
    } 
    else if (tr < 6250) {
        com = tr * 0.0066 + 56; // Adjusted decimal based on standard logic
    } 
    else if (tr < 20000) {
        com = tr * 0.0034 + 76;
    } 
    else if (tr < 50000) {
        com = tr * 0.0022 + 100;
    } 
    else if (tr < 500000) {
        com = tr * 0.0011 + 155;
    } 
    else {
        com = tr * 0.0009 + 255;
    }

    // 2. Apply the minimum commission rule
    if (com < 39) {
        com = 39;
    }

    printf("Commission: %f\n", com);

    return 0;
}