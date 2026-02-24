#include<stdio.h>

int main() {

char ch[100];
char c;
char *p = ch;
int len= 0;
printf("Enter a string:");
while((c = getchar()) != '\n' && c != EOF ){
*p++ = c;
ch[len++] = c;
}
*p--;
printf("Output: ");

while(p >= ch){
    printf("%c", *p--);

}
printf("%d", ch[len]);
printf("\n");

return 0;
}
