#include<stdio.h>

int main() {


int n;
scanf("%d", &n);
int count = 0;
while(n--){
int a,b,c;

scanf("%d %d %d", &a,&b,&c);

if(((a + b)  == 2) || ((a + c) == 2) || ((b + c) == 2)){
    count++;
}
}
printf("%d", count);
return 0;
}