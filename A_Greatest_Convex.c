#include<stdio.h>

int main() {

int n;
scanf("%d", &n);

while(n--){

int x;
scanf("%d", &x);

if(x > 1){
    printf("%d\n", x - 1);
}
else
    printf("-1");
}


}