#include <stdio.h>

int main()
{

    int n;
    int d1, d2, d3;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &n);

    d3 = n % 16;
    n = n / 16;

    d2 = n % 16;
    n = n / 16;
    d1 = n % 16;
    char c1 = (d1 < 10) ? d1 + '0' : d1 - 10 + 'A';
    char c2 = (d2 < 10) ? d2 + '0' : d2 - 10 + 'A';
    char c3 = (d3 < 10) ? d3 + '0' : d3 - 10 + 'A';

    printf("In hexadecimal, your number is: %c%c%c\n", c1, c2, c3);

    return 0;
}
