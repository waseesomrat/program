#include<stdio.h>

int main() {

FILE* fp;

fp = fopen("anisha.txt", "a");

if(fp == NULL){
    printf("Error\n");
    return 1;
}
fprintf(fp,"\nshe is very hardworking but sometimes kinda annoying");
fclose(fp);
return 0;
}