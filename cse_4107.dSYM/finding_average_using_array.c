#include <stdio.h>

int main() {

int r;
scanf("%d\n", &r);
double m[r];

double sum = 0;
int count = 0;
for(int i = 1; i <= r ;i++){

scanf("%lf", &m[i]);
    count++;
sum += m[i];
}
printf("%lf", sum / count);

return 0;
}