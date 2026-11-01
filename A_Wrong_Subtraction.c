#include <stdio.h>

int main() {
int num, n;
scanf("%d %d",&num,&n);
while(n--){
    if (num % 10 == 0) {
    num =num / 10;
    } 
    else{
    num = num - 1;
    }      
    }
    printf("%d\n", num);
    return 0;
}
