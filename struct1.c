#include<stdio.h>

struct student {
    char name[20];
    int age;

};

int main() {

    struct student s1 = {"Rahim", 20};

    printf("%s %d\n",s1.name,s1.age);

}






