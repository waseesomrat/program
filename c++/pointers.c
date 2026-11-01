#include <stdio.h>

int main() {
    char c = 'a';
    int i = 1;
    double d = 2.5;

    char *pc = &c;
    int *pi = &i;
    double *pd = &d;

    printf("The address of char c is %p\n", (void*)&c);
    printf("The address of int i is %p\n", (void*)&i);
    printf("The address of double d is %p\n", (void*)&d);

    printf("The address of char* pc is %p\n", (void*)&pc);
    printf("The address of int* pi is %p\n", (void*)&pi);
    printf("The address of double* pd is %p\n", (void*)&pd);

    printf("The value of char c is %c\n", c);
    printf("The value of int i is %d\n", i);
    printf("The value of double d is %lf\n", d);

    printf("The value of char* pc is %p\n", (void*)pc);
    printf("The value of int* pi is %p\n", (void*)pi);
    printf("The value of double* pd is %p\n", (void*)pd);

    printf("The size of char is %zu\n", sizeof(c));
    printf("The size of int is %zu\n", sizeof(i));
    printf("The size of double is %zu\n", sizeof(d));

    printf("The size of char* is %zu\n", sizeof(pc));
    printf("The size of int* is %zu\n", sizeof(pi));
    printf("The size of double* is %zu\n", sizeof(pd));

    return 0;
}
