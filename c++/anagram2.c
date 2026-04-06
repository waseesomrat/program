#include<stdio.h>

int IsAnagram(char a[], char b[]){

int count[26] = {0};

int index = 0;

for(int i = 0;a[i] != '\0';i++){
    index = a[i] - 'a';
    count[index]++;
}
for(int i = 0;b[i] != '\0';i++){
    index = b[i] - 'a';
    count[index]--;
}

for(int i = 0; i < 26;i++){
    if(count[i] != 0){
        return 0;
    }
}
return 1;
}
int main() {
char word_1[100];
char word_2[100];

printf("enter 1st word: ");
scanf("%s", word_1);
printf("enter 2nd word: ");
scanf("%s", word_2);
if(IsAnagram(word_1,word_2)){
        printf("ANA");
}
else printf("not");
return 0;
}