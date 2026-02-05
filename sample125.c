#include<stdio.h>

int main() {


int i = 20 , *p , **q;

p = &i;
q = &p;

printf("%d\n", i);
printf("%p\n", &p);
printf("%p", **q);



return 0;
}