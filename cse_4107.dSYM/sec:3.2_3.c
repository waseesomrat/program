#include <stdio.h>

int main() {


    int a ,b, c, d ,e;

    printf("Enter ISBN:");
    scanf("%3d-%d-%3d-%5d-%d", &a, &b, &c ,&d ,&e);

    printf("GS1 prefix: %3d\n" ,a);
    printf("Group identifier: %d\n" , b);
    printf("Publisher Code: %3d\n", c);
    printf("Item number: %5d\n", d);
    printf("Check digit: %d\n", e);

    return 0;
}