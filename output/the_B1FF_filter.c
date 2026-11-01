#include <stdio.h>
#include <ctype.h>
int main() {


int i = 0;
char  c;
int me[100];


while(((c = getchar()) != '\n' )&&  i < 100){

    me[i] = c;
    i++;
}

for(int j = 0;j < i;j++){

    char letter = toupper(me[j]);


        if(letter == 'A') printf("4");
        else if(letter == 'B') printf("8");
        else if(letter == 'E') printf("3");
        else if(letter == 'I') printf("1");
        else if(letter == 'O') printf("0");
        else if(letter == 'S') printf("5");
        else printf("%c", letter);
    
}


return 0;
}