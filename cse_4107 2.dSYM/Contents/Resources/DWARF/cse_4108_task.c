#include <stdio.h>

int main() {

int a;
int b;
int c;
int d;
int e;

printf("Enter Student ID:");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

printf("University Code: +%.4d\n", a);
printf("Batch Number: %.2d\n", b);
printf("Dept. ID: %.1d\n", c);
printf("Program ID:%d\n", d);
printf("Serial NO.: %.3d\n", e);

    return 0;

}




