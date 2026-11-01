#include<stdio.h>

int main() {

char c[1000];
char *p , *q;
char ch;
int len = 0;
while((ch = getchar()) != '\n' && ch != EOF){

    c[len] = ch;
    len++;
}
c[len] = '\0';

p = c;
q = c;
while(*q != '\0'){


if(*q != 'A' && *q != 'E' && *q != 'I' && *q != 'O' && *q != 'U' &&
*q != 'a' && *q != 'e' && *q != 'i' && *q != 'o' && *q != 'u'){

*p = *q;
p++;
}
q++;
}
*p = '\0';
printf("output: %s", c);
return 0;
}