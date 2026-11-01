#include <stdio.h>

int main() {

    int age;

    printf("enter your age:");
    scanf("%d", &age);

    if(age >= 18){
        printf("you can vote");

    }
     else if(age > 120 || age < 0)  {
         printf("invalid age");
    }
 
    
    else if(age < 0){
        printf("invalid age");
    }

    return 0;
}