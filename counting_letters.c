#include <stdio.h>

int main() {

char chaR;
int let = 0;
printf("ENTER THE LINE:");

while(chaR != '\n' && chaR == '\t'){
     let++;
chaR = getchar();

   
}
printf("%d", let);

return 0;
}