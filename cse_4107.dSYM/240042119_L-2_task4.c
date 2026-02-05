#include <stdio.h>
#include <math.h>


int main() {

double x1,x2,y1,y2;


printf("enter x1 and y1: ");
scanf("%lf %lf", &x1 , &y1);

printf("enter x2 and y2: ");
scanf("%lf %lf", &x2 , &y2);

double Manhattan = fabs(x1 - x2) + fabs(y1 - y2);
double Euclidean = sqrt( (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) );

printf("Manhattan distance: %.2lf\n", Manhattan);

printf("Euclidean distance: %lf\n", Euclidean);

return 0;

}