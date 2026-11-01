#include<stdio.h>
#define LL long long
int main() {

 LL n;
int count[10] = {0};
int digit;

scanf("%lld", &n);

while(n > 0){

    digit = n % 10;
    count[digit]++;
    n /= 10;
}
    for(int i = 0;i < 10;i++){
        if(count[i] > 0){
            printf("repeated digit: %d & repeating times: %d\n", i, count[i]);
        }
    }

return 0;
}