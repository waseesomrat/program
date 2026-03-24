#include<stdio.h>

int add(int q,int r){
    return q + r;
}
int main() {
int a,b;
    scanf("%d %d", &a , &b);
    int x = add(a,b);
    printf("%d", x);
}

