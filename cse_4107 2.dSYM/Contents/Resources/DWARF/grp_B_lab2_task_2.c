/*polynomial evaluation

write a C program that asks the user to enter the value of x and outputs the value of the following polynomial*/
//3x^5 + 2x^4 - 5x^3 -x^2 + 7x -6, 'C doesn't have an exponential operator//
#include <stdio.h>

int main() {

    int x;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int result = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - (x*x) + 7*x - 6;

    printf("The value of the polynomial is: %d\n", result);

    return 0;
}


