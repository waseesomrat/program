#include <stdio.h>

int main() {

int t;
scanf("%d", &t);
while(t--){

int x,n;

scanf("%d %d" ,&x , &n);

if(x >= 1 && n >= 1 && x <= 10 && n<= 10 && n %2 == 0)
printf("\n0");

else 
printf("\n%d", x);
}
return 0;

}