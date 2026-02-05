#include <stdio.h>
#include <string.h>
int main() {


int n,pal = 0;

char ch[100];

scanf("%s", ch);

n = strlen(ch);

for(int i = 0; i < (n / 2);i++){

    if(ch[i] == ch[n - 1 - i]){
        pal = 1;
        break;
    }
}
if(pal){
    printf("palindrome");
}
else
printf("not palindrome");

return 0;
}