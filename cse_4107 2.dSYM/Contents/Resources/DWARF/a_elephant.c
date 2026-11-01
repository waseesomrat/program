#include <stdio.h>

int main() {

int x, step;

 scanf("%d", &x);

if(x >=1 && x <= 1000000 && x % 5 == 0) {
   
    step = x / 5;
    printf("%d", step);
    }
 else if(x >=1 && x <= 1000000 && x % 5 != 0) {
    step = x / 5 + 1;
    printf("%d", step);
}
    return 0;

}