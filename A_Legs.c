#include<stdio.h>

int main() {

int t;scanf("%d", &t);

while(t--){
int x;
scanf("%d", &x);

if(x % 4 == 0){
    printf("%d\n", x / 4);
}
else if(x % 2 == 0 && x % 4 != 0){
    printf("%d\n", x / 4 + 1);
}
}
return 0;
}