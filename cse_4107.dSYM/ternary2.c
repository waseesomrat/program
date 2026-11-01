#include <stdio.h>

int main() {

    char operator = '+';

    int num1 = 1;
    int num2 = 2;

    int result = (operator == '+') 
                 ? printf("%d", num1 + num2) 
                 : printf("%d", num1 - num2);

    printf("\nReturn value: %d\n", result);

    return 0;
}
