#include <stdio.h>

int main(void) {
int t;
scanf("%d", &t);
int sum1=0,sum2=0,sum3=0;

    int a, b ,c;
for( int i =1; i <= t; i++){
 int a, b ,c;
scanf("%d %d %d", &a , &b , &c);
sum1 += a;
sum2 += b;
sum3 += c;
    }
if(sum1 == 0 && sum2 == 0 && sum3 ==0)
printf("YES\n");
else 
printf("NO\n"); 




return 0;
}
