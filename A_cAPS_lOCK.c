#include<stdio.h>
#include<ctype.h>

int main() {

char s[100];
int f = 1;
scanf("%s", s);

for(int i = 1;s[i];i++){
    if(!isupper(s[i])){
        f= 0;
        break;
    }

}

if(f){
    for(int i = 0;s[i];i++){
        if(islower(s[i]))
            s[i] = toupper(s[i]);
            else
            s[i] = tolower(s[i]);
        }
    }
    printf("%s", s);
}
