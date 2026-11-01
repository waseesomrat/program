#include<stdio.h>

int Isleap(int year){
    if(year % 4 == 0){
        if(year % 100 ==0){
            if(year % 400 == 0){
                return 1;
            }
            return 0;
        }
         return 1;
    }
    return 0;
}
int main() {
int year;
scanf("%d", &year);
    if(Isleap(year)){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}