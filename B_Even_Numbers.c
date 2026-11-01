#include<stdio.h>

int main() {
int n;

scanf("%d", &n);
if(n >= 2){
for(int i = 2 ; i <= n ;i++){
    printf("%d\n",i++);
}
}
else
printf("-1");
return 0;
}