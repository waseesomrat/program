//function calling function
#include<stdio.h>
int square(int x){
    return x*x;
}
int calc(int n){
    return square(n);
}
int main() {
int r;scanf("%d", &r);
int x = calc(r);
    printf("%d", x);
}
