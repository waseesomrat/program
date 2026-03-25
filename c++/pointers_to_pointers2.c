#include<stdio.h>

void modify(int **pcp){
    **pcp = 500;
}
int main() {

int x = 100;
int *p = &x;
modify(&p);
printf("%d", x);
}