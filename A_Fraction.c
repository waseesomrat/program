#include<stdio.h>

int main() {
int n;
scanf("%d", &n);
int p,q;

if(n % 2 == 1){
    p = n / 2;
    q = p + 1;
}
else{
    p = n / 2 - 1;
    q = n - p;
}
printf("%d %d", p , q);
return 0;
}