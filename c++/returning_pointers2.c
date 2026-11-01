#include<stdio.h>

int* max(int* q,int* r){
    if(*q > *r){
        return q;
    }
    else{
        return r;
    }
}

int main() {
    int a , b;
    int *p;
    scanf("%d %d", &a, &b);

    p = max(&a, &b);

    printf("%d", *p);
}