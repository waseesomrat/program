#include <stdio.h>

int main() {

int num, product, count = 10;

printf("Enter a number: ");
scanf("%d", &num);

 do {
    product = num * count;  

    printf("%d * %.6d = %d\n", num, count, product);

    count = count - 1; 
            
 } while(count > 0);
return 0;
}