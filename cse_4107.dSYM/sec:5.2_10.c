#include <stdio.h>

int main() {

    int num;
printf("Enter numerical grade:");
scanf("%d", &num);

if( num >= 90 && num <=100){

    printf("Letter grade: A\n");
}
else if(num < 90 && num >=80){

    printf("Letter grade: B\n");
}
else if(num < 80 && num >=70){

    printf("Letter grade: C\n");
}else if(num < 70 && num >=60){

    printf("Letter grade: D\n");
}else if(num < 60 && num >=0){

    printf("Letter grade: F\n");
}
return 0;
}