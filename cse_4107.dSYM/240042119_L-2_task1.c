#include <stdio.h>

int main() {

    double ammount;
    double ammount2;
    printf("Enter an ammount :");
    scanf("%lf", &ammount);

    ammount2 = ammount + (ammount*0.05);

    printf("with VAT added: %.2lf", ammount2);
 
    return 0;

}