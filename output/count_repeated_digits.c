#include<stdio.h>

void repeated_digit() {

int digit[10] = {0};
char c;
int repeated = 0;


while((c = getchar()) != '\n'){
    if(c >= '0' && c <= '9'){
    int val = c - '0';
    digit[val]++;
}}
for(int i = 0;i < 10;i++){
    if(digit[i] > 1){
        printf("repeated digit: %d & repeated times: %d\n", i , digit[i]);
        repeated = 1;
    }
}
    if(repeated == 0){
        printf("NO REPEATED");
    }
}
int main() {
    printf("ENTER NUMBER");
    getchar();
    repeated_digit();
    return 0;
}