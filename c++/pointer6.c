#include<stdio.h>

int main() {

int x = 100;

int *p = &x;

int **cp = &p;
printf("%d\n", *p);
printf("%d",**cp);
}