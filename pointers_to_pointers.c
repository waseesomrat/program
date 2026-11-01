#include <stdio.h>

int main() {

    int a[10] = {0};

    int *p = a;

    int **q = &p;

    printf("Address stored in p: %p\n", p);
    printf("Address of p: %p\n", &p);
    printf("Value of q: %p\n", q);
    printf("Value of *q: %p\n", *q);
    printf("Value of **q: %d\n", **q);

    return 0;
}