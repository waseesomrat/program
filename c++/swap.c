#include<stdio.h>
void swap(int *p , int *q){
    int temp = *q;
        *q = *p;
        *p = temp;
}
int main() {
int x, y;
scanf("%d %d", &x , &y);
swap(&x,&y);
printf("%d %d", x,y);
}