#include<stdio.h>
int summation(int x){
    if(x == 0){
        return 0;
    }
    return x + summation(x - 1);
}


int main() {
int n;
scanf("%d", &n);

int w=  summation(n);

printf("%d", w);
return 0;
}