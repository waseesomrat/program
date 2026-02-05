#include <stdio.h>

int main() {


    int number;

    printf("enter your number:");
    scanf("%d", &number    );

    switch(number){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("weekday");
            break;
    
        case 6:
        case 7:
            printf("weekend");
            break;
        default:    
            printf("invalid number");
    }
}