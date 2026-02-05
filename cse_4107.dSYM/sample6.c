#include <stdio.h>

int main() {

int n, d1,d2,d3;
char c1,c2,c3;

scanf("%d", &n);

d3 = n % 16 ;
n = n / 16;

d2 = n % 16;
n = n / 16;

d1 =  n % 16;

c1 = ( d1 < 10 ) ? d1 + '0' : d1 - 10 + 'A';
c2 = ( d2 < 10 ) ? d2 + '0' : d2 - 10 + 'A';
c3 = ( d3 < 10 ) ? d3 + '0' : d3 - 10 + 'A';

printf("%c%c%c\n",c1,c2,c3);

return 0;

}



