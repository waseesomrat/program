#include<stdio.h>
#include<math.h>
int main() {

int n,m,a;
scanf("%d %d %d", &n,&m,&a);
double t = (double)n / a;
double y = (double)m / a;
long long z = ceil(t);
long long q = ceil(y);

long long r = z * q;

printf("%lld", r);
return 0;
}