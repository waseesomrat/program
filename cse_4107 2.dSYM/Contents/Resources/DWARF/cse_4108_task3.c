#include <stdio.h>

int main() {


int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;

printf("Enter the number from 1 to 16 in any order:");
scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);     

printf("Arranging as a square:\n");
printf("%d %d %d %d\n", a,b,c,d);
printf("%d %d %d %d\n", e,f,g,h);
printf("%d %d %d %d\n", i,j,k,l);
printf("%d %d %d %d\n", m,n,o,p);


printf("Row sums: %d", a+b+c+d);
printf(" %d", e+f+g+h);
printf(" %d", i+j+k+l);
printf(" %d\n", m+n+o+p);

printf("Column sums: %d", a+e+i+m);
printf(" %d", b+f+j+n);
printf(" %d", c+g+k+o);
printf(" %d\n", d+h+l+p);

printf("Diagonal sums: %d", a+f+k+p);
printf(" %d\n", d+g+j+m);

return 0;

}