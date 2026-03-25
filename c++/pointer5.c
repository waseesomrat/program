#include<stdio.h>

void swap(int *a,int *b){

    int temp = *b;
    *b = *a;
    *a = temp;
}



int main() {

int x = 5,y = 10;

    swap(&x,&y);

    printf("x = %d, y = %d", x,y);
    return 0;

}


