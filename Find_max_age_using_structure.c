#include<stdio.h>
struct student {
char name[100];
int age;
};
int main() {
int n;
scanf("%d", &n);
struct student s[n];
int i;
for(i = 0;i < n;i++){
scanf("%s %d",s[i].name,&s[i].age);
}
int max = s[i].age;
int index = 0;
for(int i = 0;i < n;i++){
    if(s[i].age > max){
        max = s[i].age;
        index = i;
    }
}
printf("%s", s[index].name);
return 0;
}