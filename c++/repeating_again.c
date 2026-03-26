#include<stdio.h>

void repeat(int n){

int count[10] = {0};
int temp = n;

while(temp > 0){
    int digit = temp % 10;
    count[digit]++;
    temp /= 10;
}
printf("Repeated Digit(s):\n");
    int found = 0;

    for(int i = 0;i < 10;i++){
        if(count[i] > 1){
            printf("%d %d\n", i, count[i]);
            found = 1;
        }
    }
    if(!found){
        printf("None\n");
    }
    printf("\n");
}
int main() {


    int x ;
    while(1){
    scanf("%d", &x);
    if(x <= 0) break;
    repeat(x);
}
    return 0;
}