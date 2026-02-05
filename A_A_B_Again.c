#include <stdio.h>
int main(){

int t;
scanf("%d" , &t);
while(t--){

int a,b,c,out;
scanf("%d", &a);

b = a / 10;
c = a % 10;
out = b + c;
printf("%d\n", out);
}
return 0;
}