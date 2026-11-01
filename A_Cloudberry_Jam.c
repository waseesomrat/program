#include <stdio.h>

int main() {

int x;
scanf("%d", &x);

while(x--){

int p,q,out;
scanf("%d\n", &p);
q = 3*p;
out = ((q * 4) / 3 ) / 2;

printf("%d\n", out);
}
return 0;
}