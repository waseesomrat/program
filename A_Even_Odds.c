#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long odds = (a + 1) / 2;

    if(b <= odds){
        printf("%lld\n", 2 * b - 1);}
    else{
        printf("%lld\n", 2 * (b - odds));}
    return 0;
}