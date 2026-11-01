#include <stdio.h>

int main() {

int count = 10;

int num;

int product;

scanf("%d", &num);
printf("\n");
do{
product = num * count;
printf(" %d *   %3d = %3d\n",num , count , product );
count--;

}while(count >= -10);


return 0;

}