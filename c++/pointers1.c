#include<stdio.h>
//changing value
int main() {
int x = 100;
int *p = &x;
*p = 200;
printf("%d\n", x);
// printf("%p\n", p);
// printf("%d", *p);
}