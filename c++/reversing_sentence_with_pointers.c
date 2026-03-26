#include<stdio.h>
#include<ctype.h>
#define MAX 200
void read_sent(char* str,char* punc){
char *p = str;
while((*p = getchar()) != '\n' && p < str + MAX - 1){
    p++;
}
*p = '\0';
p--;
    char *q = punc;

    while(p >= str && !isalpha(*p)){
        *q++ = *p;
        p--;
    }
    *q = '\0';
    *(p + 1) = '\0';
}

void rev_sent(char* str, char* punc){
char *end  = str;
while(*end){
    end++;
}
end--;
printf("Reversal of sentence: ");
while(end >= str){
    char *start = end;
    while(start > str && *(start - 1) != ' '){
        start--;
    }
char *temp = start;
while(temp <= end){
    putchar(*temp);
    temp++;
}
putchar(' ');
end = start - 2;
}
printf("%s\n", punc);
}
int main() {
char sent[MAX];
char punc[100];
printf("enter the sentence: ");
read_sent(sent,punc);
rev_sent(sent,punc);
return 0;
}