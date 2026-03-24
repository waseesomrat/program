#include<stdio.h>
#include<ctype.h>
void vccount(char ch[], int length){

int vowel = 0;
int cons = 0;

for(int i = 0;i < length;i++){

    if(ch[i]== 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'){
            vowel++;
    }
            else
            cons++;
    }
    printf("Vowel count: %d\n", vowel);
     printf("consonent count: %d\n", cons);
}
int main() {

char ch[100];

char c;

int i = 0;
while((c = getchar()) != '\n'){
    ch[i++] = toupper(c);


}
vccount(ch,i);
}

