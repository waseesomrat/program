#include <stdio.h>

int main() {

int num;

printf("Enter a number:");

scanf("%d", &num);

if( num < 9)
printf("The Number %d has 1 digit\n", num );

else if ( num < 99)
printf("The Number %d has 2 digit\n", num );

else if( num < 999)
printf("The Number %d has 3 digit\n", num );


return 0;
}