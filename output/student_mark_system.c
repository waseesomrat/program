#include<stdio.h>

int main() {

int n;
scanf("%d", &n);

int a[n];
double sum = 0,max = 0;
int i = 0;
for(i = 0;i < n;i++){
    scanf("%d", &a[i]);
sum += a[i];
if(a[i] > max)
max = a[i];
}
double x = sum / (sizeof(a) / sizeof(a[i]));

printf("Average = %.2lf,max = %.2lf ", x, max);

return 0;

}