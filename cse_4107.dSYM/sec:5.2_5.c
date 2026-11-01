#include <stdio.h>

int main() {

float inc,tax;

scanf("%f", &inc);
if(inc <= 750){

tax = inc*.01;
printf("%.2f", tax);


}
else if( inc < 2250){

    tax = inc*0.02 + 7.5;
    printf("%.2f", tax);
}
else if( inc < 3750){

    tax = inc*0.03 + 37.5;
    printf("%.2f", tax);
}
else if( inc < 5250){

    tax = inc*0.04 + 82.5;
    printf("%.2f", tax);
}
else if( inc <= 7000){

    tax = inc*0.05 + 142.5;
    printf("%.2f", tax);
}
else if( inc > 7000){

    tax = ((inc*0.06) + 230);
    printf("%.2f", tax);
}
return 0;
}