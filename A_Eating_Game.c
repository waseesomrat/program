#include<stdio.h>
int main() {
int n;
scanf("%d", &n);
while(n--){
int x;
scanf("%d", &x);
int max = -10000;
int a[x];
int count = 0;
for(int i = 0;i < x;i++){
scanf("%d", &a[i]);
if(max < a[i]){
max = a[i];
}
}
for(int i = 0;i<x;i++){
if(max == a[i]){
    count++;
}
}
printf("%d\n",count);
}
return 0;
}

