#include <stdio.h>

int main() {


    int num;

    int count = 10;

    int product;

    printf("Enter a number: ");
    scanf("%d", &num);
    while(count >0) {
        product = num * count;   // calculate AFTER scanning

        printf("%d * %2d = %d\n", num, count, product);

        count = count - 1;         // decrease count
    }

    return 0;

}