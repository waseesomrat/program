#include <stdio.h>

int main() {
    float num, max = 0.0f;

    for (;;){
        printf("Enter a number: ");
        scanf("%f", &num);

        if (num <= 0) {
            break;
        }

        if (num > max) {
            max = num;
        }
    }
    printf("\nThe largest number entered was %.4g\n", max);

    return 0;
}