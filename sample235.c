#include<stdio.h>
void t(int a , int *q){
a =  20;
q = 25;
}
int main() {
int x = 15;
int y = 30;
t(x , &y);
printf("%d %d", x, y);
return 0;
}