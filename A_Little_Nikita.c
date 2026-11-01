#include<stdio.h>

int main() {
int n;
scanf("%d", &n);

while(n--){
int m,r;
scanf("%d %d", &m , &r);
if(m >= r){
    if((m - r ) % 2 == 0){
        printf("YES\n");
    }
    else
    printf("NO\n");
}
else
printf("NO\n");
}
}