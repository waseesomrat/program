#include<stdio.h>

void change(int **cp){

    static int b = 129;

    *cp = &b;
}
int main() {


    int x = 155;
    int *p = &x;

    change(&p);

    printf("%d\n", *p);
    printf("%p\n", &x);
      printf("%p",p);
}