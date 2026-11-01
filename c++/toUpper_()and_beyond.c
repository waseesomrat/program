#include<stdio.h>

void read_string(char ch[], int length){
    for(int i = 0; i < length; i++){
        scanf(" %c", &ch[i]);
    }
}

char to_uppercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch - 'a' + 'A';
    }
    return ch;
}

void print_string(char ch[], int length){
    for(int i = 0; i < length; i++){
        printf("%c", to_uppercase(ch[i]));
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d", &n);
    char str[n];
    read_string(str, n);
    print_string(str, n);
    return 0;
}