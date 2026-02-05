#include <stdio.h>
int main() {


    char operator;
    double num1 , num2;

    printf("enter operator:");
    scanf(" %c", &operator);

    printf("enter 1st number:");
    scanf("%lf", &num1);


    printf("enter 2nd number:");
    scanf("%lf" , &num2);    

    double result;

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("%.2lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("result = %.2lf", result);
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
                printf("%.2lf", result);
            }
            else{
                printf("Error: Division by zero");
            }
            break;
        default:
            printf("invalid operator");
    }

return 0;
}