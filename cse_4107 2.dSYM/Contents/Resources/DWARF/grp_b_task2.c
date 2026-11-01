#include <stdio.h>

int main() {

    int in, mm, dd, yyyy;
    float up;

    printf("Enter item number: ");
    scanf("%d", &in);

    printf("Enter unit price: ");
    scanf("%f", &up);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("\nItem\tUnit Price\tPurchase Date\n");
    printf("%d\t%10.2f\t%.2d/%.2d/%d\n", in, up, mm, dd, yyyy);

    return 0;
}
