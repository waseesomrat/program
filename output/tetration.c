#include <stdio.h>
#include <math.h>
int main() {


unsigned long long n1,n2,n3 = 1,n4;

scanf("%llu %llu", &n1 , &n2);

for(int i = 1; i <= n2;i++){

    n3 = pow(n1, n3);
}

if(n3 > 1844674407000000000){
    printf("OVERFLOW");
}
else

printf("%llu", n3);

return 0;
}