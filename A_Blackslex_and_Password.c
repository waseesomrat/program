#include <stdio.h>

int main() {
    int num;
 
    scanf("%d", &num);

if(  num >1 && num < 1000000 && num / num == 1 && num%2 != 0 && num / 1 == num && num%3 != 0 && num %5!=0 && num %7!=0)
printf("YES");
else
printf("NO");
    return 0;
}
