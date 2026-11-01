#include<stdio.h>

struct student {

    char name[200];
    int age;
};

int main() {
    int n;
    scanf("%d", &n);
struct student s[n];

for(int i = 0;i < n;i++){
    scanf("%s %d", s[i].name,&s[i].age);
}
for(int i = 0;i < n;i++){
    printf("%s %d\n", s[i].name,s[i].age);
}
return 0;
}



