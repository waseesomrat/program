#include<stdio.h>
struct student {
char name[20];
int age;
};
void printstudent(struct student s){
printf("%s %d\n",s.name,s.age);
}
int main() {
struct student s1 = {"wasi",0};
printstudent(s1);
return 0;
}





