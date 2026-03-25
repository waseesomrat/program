#include<stdio.h>
void swapPtr(int **a, int **b){
    int *temp = *a;
    *a = *b;
    *b = temp;

}
int main() {
    int x = 100;
    int y = 200;
    int *p = &x;
    int *q = &y;
    swapPtr(&p,&q);
    printf("%p %p\n", &x, &y);
    printf("%p %p\n", p , q);
     printf("%d %d", *p , *q);
}