#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--){
        long long x, y;
        scanf("%lld %lld",&x, &y);
                 long long r = y / 2;


    if( x > (y / 2)){
        printf("%lld\n", y % x);
    }
    else if( y % 2 != 0){
        long long q = (y + 1) % (r + 2);
        printf("%lld\n", q); 
    }
    else if(y % 2 == 0){
        long long u = (y - 1) % r;
        printf("%lld\n", u);
    }
    }
    return 0;
}