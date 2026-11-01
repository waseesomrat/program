#include<stdio.h>

int main() {

    int a,b,c;
    scanf("%d %d", &a,&b);

    if(a != 3 && b != 3){
        c = 3;
    }
        else if(b != 2 &&  a!= 2){
            c = 2;
        }  
            else if(b != 1 &&  a!= 1){
            c = 1;
        }  
        printf("%d", c);
        return 0;
    }

