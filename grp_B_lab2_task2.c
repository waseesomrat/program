#include <stdio.h>

int main() {

    int x;

    printf("enter x: ");
    scanf("%d", &x);

    int result = (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    printf("the value of the polynomial is: %d\n", result);

    return 0;
}
