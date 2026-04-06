#include<stdio.h>

int main() {

int t ;
scanf("%d" ,&t);
while(t--){

int x[7];
int max = -11000;
int sum = 0;
for(int i = 0;i < 7;i++){
    scanf("%d", &x[i]);
    if(x[i] > max){
        max = x[i];
    }
}
for(int i = 0; i < 7;i++){
    sum += x[i];
}
printf("%d\n",2*max - sum);
}
}