#include<stdio.h>

struct student {

    char name[20];
    int age;
};

int main() {

    struct student s1 = {"wasi", 20};

    // scanf("%s %d", s1.name,&s1.age);
    printf("%s %d", s1.name, s1.age);
return 0;
}