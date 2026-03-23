#include<stdio.h>

int main() {

int n,digit;
int digit_seen[10] = {0};
scanf("%d", &n);
while(n > 0){
    digit = n % 10;

    if(digit_seen[digit]){
        printf("repeated digit: %d\n", digit);
    }
    digit_seen[digit] = 1;
    n /= 10;

}
return 0;
}