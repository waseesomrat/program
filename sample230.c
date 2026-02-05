#include <stdio.h>
void inc( int x){
x++;
}
int main() {
    int a = 10;
    inc(a);
    printf("%d" , a);
    return 0;
}
