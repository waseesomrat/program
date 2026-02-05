#include <stdio.h>

int main() {

    double loan, yrate, mpayment, mrate, balance;
  

    printf("Enter amount of loan: ");
    scanf("%lf", &loan);

    printf("Enter interest rate: ");
    scanf("%lf", &yrate);

    printf("Enter monthly payment: ");
    scanf("%lf", &mpayment);

    
    mrate = (yrate / 100) / 12;
    balance = loan;


    balance = balance - mpayment + (balance * mrate);
    printf("Balance remaining after first payment: $%.2lf\n", balance);

    
    balance = balance - mpayment + (balance * mrate);
    printf("Balance remaining after second payment: $%.2lf\n", balance);

    balance = balance - mpayment + (balance * mrate);
    printf("Balance remaining after third payment: $%.2lf\n", balance);

    return 0;
}
