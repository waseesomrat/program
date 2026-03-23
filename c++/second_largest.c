#include<stdio.h>

int main() {
int n;
scanf("%d", &n);
int max = 0;
int second = -19999;
int a[n];
for(int i = 0;i < n;i++){
    scanf("%d", &a[i]);
    if(a[i] > max){
        second = max;
        max = a[i];
       
    }
    else if(a[i] > second && a[i]!= max){
        second = a[i];
    }
}
printf("%d", second);
}