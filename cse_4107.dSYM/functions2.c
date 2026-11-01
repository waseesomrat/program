#include<stdio.h>

void name_age(char name[], int age) {

    printf("%s is %d years old", name,age);

}

int main() {

    name_age("wasi", 22);
    printf("\n");
    name_age("anisha", 20);

    return 0;

}