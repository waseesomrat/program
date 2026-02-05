#include<stdio.h>
void read_string(char ch[],int length){

fgets(ch,length,stdin);
}
    char to_uppercase(char ch){
        if(ch >= 'a' && ch <= 'z'){
            return ch - 32;
    }
        return ch;
}
void print_string(char ch[], int length){
for(int i = 0;ch[i] != '\0';i++){
    printf("%c", to_uppercase(ch[i]));
  
}
  printf("\n");
}

int main() {

char str[1000];
read_string(str, 1000);
print_string(str, 1000);
return 0;
}