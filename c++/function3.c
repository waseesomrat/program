#include<stdio.h>
int process(int d, int v){
    return d + v;
}
int multiply(int r , int q){
    return  r*q;
}

int main() {
int a , b, c;
scanf("%d %d %d", &a, &b ,&c);
int result = process(multiply(a,b),c);
printf("%d", result);
}