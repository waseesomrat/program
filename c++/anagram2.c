#include<stdio.h>

int isAnagram(char a[], char b[]){

int count[26] = {0};

int index = 0;

for(int i  = 0; a[i] != '\0';i++){
    index = a[i] - 'a';
    count[index]++;
}
for(int i  = 0; b[i] != '\0';i++){
    index = b[i] - 'a';
    count[index]--;
}

for(int i = 0;i < 26;i++){
    if(count[i] != 0){
        return 0;
    }
}
return 1;
}
int main() {

char word_1[100] ;


char word_2[100] ;

printf("Enter first word: ");
scanf("%s", word_1);

printf("Enter second word: ");
scanf("%s", word_2);

if(isAnagram(word_1,word_2)){
    printf("Anagram");
}
else
printf("NOT");
return 0;
}