#include<stdio.h>
//using function
void change(int *p){
*p = 20;
}



int main() {

int x = 10;

change(&x);

printf("%d", x);
}