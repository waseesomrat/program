#include <stdio.h>
#include <math.h>

int main() {

double x;
double yo, yn = 1.0;
printf("Enter number");
scanf("%lf", &x);



do{
yo = yn;
yn = ((yn + x/yn)) / 2.0;


}
while(fabs(yn - yo) > (.00001 * yo));

printf("%lf", yn);
return 0;
}