#include <stdio.h>

int main() {

    int num;

    printf("Enter a number between 0 and 32767:");
    scanf("%d", &num);

    if(num > 0 && num < 32767) {
        printf("In octal, your number is: %.5o\n", num);

      
    }
    else 
    printf("Number out of range\n");
    return 0;
}