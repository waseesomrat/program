#include <stdio.h>

int main() {

int t;
scanf("%d", &t);

while(t--){

int a,b,c,d;

scanf("%d %d %d %d", &a, &b , &c ,&d);

if(a > b && a > c && a > d)
printf("0\n");
else if(a > b && a > c && a <d)
printf("1\n");
else if(a > b && a < c && a >d)
printf("1\n");
else if(a < b && a > c && a >d)
printf("1\n");
else if(a > b && a < c && a <d)
printf("2\n");
else if(a < b && a < c && a >d)
printf("2\n");
else if(a < b && a > c && a <d)
printf("2\n");
else
printf("3\n");
}
}