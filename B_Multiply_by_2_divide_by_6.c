#include <stdio.h>

int main() {

    int t;
scanf("%d", &t);

while(t--) {

long long int n;
int cnt2 =0 , cnt3 = 0;

scanf("%lld", &n);

while(n % 2==0){
n = n / 2;
cnt2++;}
while(n %3 ==0){
n = n / 3;
cnt3++;}

if(n != 1 || cnt2 > cnt3)
printf("-1\n");

else
printf("%d\n", (cnt3 -cnt2) + cnt3);
}
 return 0;
}

