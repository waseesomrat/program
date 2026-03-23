#include<stdio.h>

int main() {
char ch;
printf("Enter message: ");
while((ch = getchar()) != '\n'){
if(ch >= 'a' && ch <= 'z'){
    ch = ch - 'a' + 'A';
}
switch(ch){
case 'A': ch = '4';break;
case 'B': ch = '8';break;
case 'E': ch = '3';break;
case 'I': ch = '1';break;
case 'O': ch = '0';break;
case 'S': ch = '5';break;
}
printf("%c", ch);
}
printf("!!!!!!!!!!!!");
return 0;
}