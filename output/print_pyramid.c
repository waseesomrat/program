#include<stdio.h>

void p(int lines){

for(int i = lines;i >= 1;i--){

    for(int j = 1;j <= lines - i;j++){
        printf(" ");}
            for(int k = 1; k <= (2*i - 1);k++){
                printf("*");
            }
           printf("\n"); 
    }
    
}
int main() {

int n;
scanf("%d", &n);
p(n);

return 0;
}