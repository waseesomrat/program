#include<stdio.h>

void find( int year){

if((year % 400 ==0) || (year %100 != 0 && year % 4 ==0)){
    printf("YES");
    
    }
    else 
    printf("NO");
    return;
}


int main() {
int n;
printf("Enter a year: ");

scanf("%d", &n);

find(n);

return 0;
}