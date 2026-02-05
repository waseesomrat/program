#include <stdio.h>

int main() {

  float x;
  
  printf("Enter value of x:");
    scanf("%f", &x);

    float result = (3 * (x * x * x * x * x)) - 2*(x * x * x * x) + 5*(x * x * x) + x*x - 7*x + 6;

    printf("Value of the polynomial for x=%.0f: %.2f\n", x, result);

    return 0;

}