#include<stdio.h>
#include<string.h>
int main() {

char s[100];
fgets(s,sizeof(s),stdin);
int count_v = 0;
int count_c = 0;

for(int i = 0 ; i < strlen(s); i++){
    if(s[i] == 'a'|| s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u'){
        count_v++;
    }
    else
    count_c++;
}

printf("vowel : %d cons: %d", count_v , count_c);
}