#include <stdio.h>
int main() {
int digits[10]  = {};
int repeated = 0;
char c;
while((c = getchar()) != '\n')
{
if(c >= '0' && c <= '9'){
int val = c - '0';
digits[val]++;
}
}
for(int i = 0;i < 10;i++){
    if(digits[i] > 1){
    repeated = 1;
    printf("%d prints:%d times\n", i,digits[i]);
    }
}
if(repeated == 0){
printf("not repeated");}
return 0;
}