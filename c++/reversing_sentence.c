#include<stdio.h>

int main() {


char sen[1000];
int l;
int c;


while((c = getchar()) != '\n' && c != EOF){

    if(l < sizeof(sen) - 1){
        sen[l++] = (char)c;
    }
}
    sen[l] = '\0';


    for(int i = l - 1;i >= 0;i--){

        while(i >= 0 && sen[i] == ' '){
            i--;
        }
       if(i < 0)
    break;

    int end = i;

        while(i >= 0 && sen[i] != ' ')
            i--;
        

        int start = i + 1;

        for(int j = start; j <= end;j++){
            printf("%c", sen[j]);
        }
        printf(" ");
}
printf("\n");
return 0;
}