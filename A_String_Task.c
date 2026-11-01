#include<stdio.h>
#include<ctype.h>

int iflower(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y'){
    return 1;
}
return 0;}

int main() {
        char c;
        char str[100];
        int index = 0;

        while((c = getchar()) != '\n'){
            str[index++] = tolower(c);
    }
    str[index] = '\0';
    int i = 0;
    while(str[i] != '\0'){
       if(!iflower(str[i])){
       printf(".%c", str[i]);}
        i++;
    }
    printf("\n");
    
    return 0;
}