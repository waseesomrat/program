#include <stdio.h>
#include<string.h>
int main() {
    FILE *fp;
    char name[20] = "wasi somrat";
    int length = strlen(name);
    int i;
    fp = fopen("file.txt", "w");
    if (fp == NULL) {
        printf("File not created!\n");
    }
    else
    printf("File created successfully!\n");
    for(int i = 0;i < length; i++){
        fputc(name[i],fp);
    }
    fclose(fp);
    return 0;
}
