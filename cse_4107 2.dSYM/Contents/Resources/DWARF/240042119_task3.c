#include <stdio.h>

int main() {


double degree;

double pi = 3.141593;



printf("Enter value in degrees :");
scanf("%lf", &degree);

double radian = degree*(pi/180);
printf("radian = %lf\n", radian);
return 0;

}