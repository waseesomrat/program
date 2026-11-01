#include<stdio.h>
#include<string.h>

void reversestring(char str[], int left,int right){
if(left >= right) return;
char temp = str[left];
str[left] = str[right];
str[right] = temp;
reversestring(str,left + 1,right - 1);
}


int main() {
char str[100];
// scanf("%s", str);
fgets(str,sizeof(str),stdin);
reversestring(str,0,strlen(str)-1);
printf("reversed string: %s\n", str);
}