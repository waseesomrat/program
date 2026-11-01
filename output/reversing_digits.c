#include <stdio.h>

int main() {


    int n,a,b,c;
printf("Enter a three-digit number: ");
scanf("%d", &n);

a = n / 100;
c = (n - (a * 100)) % 10;
b  = (n - (a * 100)) / 10;





printf("the reversal is: %d%d%d",c,b,a);


    return 0;



}