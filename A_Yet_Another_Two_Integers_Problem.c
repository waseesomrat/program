#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
int n,a,b,l;
scanf("%d", &n);

while(n--){
scanf("%d %d", &a, &b);
if(a == b){
    printf("0\n");
}
    else{
        l = ceil((abs(a - b)) / 10.0);
    printf("%d\n", l);
    }

}
return 0;
}
