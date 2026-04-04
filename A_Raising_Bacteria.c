#include<stdio.h>

int closestpower(int q){
int w = 1;
while(w * 2 <= q){
    w *= 2;
}
return w;
}
int count(int n){
    int count = 0;
    while(n > 0){
        int x = closestpower(n);
        n = n - x;
        count++;
    }
    return count;
}
int main() {
    int n;
scanf("%d", &n);
int r = count(n);
printf("%d", r);
    return 0;
}
