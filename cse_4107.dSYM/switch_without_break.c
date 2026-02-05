#include <stdio.h>

int main() {

 int number;
 

 printf("enter your number:");
    scanf("%d", &number    );
 switch(number){
     case 1:
         printf("\none");
         
     case 2:
         printf("\ntwo");
    
     case 3:
         printf("\nthree");
         
     default:
         printf("invalid number");
 }

}