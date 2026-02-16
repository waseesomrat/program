#include<stdio.h>

void swap(int *x, int *y){


int temp = *y;
*y = *x;
*x = temp;





}
int main() {

int q;
int p;
printf("Enter values:");
scanf("%d %d",&p,&q);


swap(&p,&q);
printf("%d %d", p, q);
return 0;
}