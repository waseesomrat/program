#include<stdio.h>
#include<ctype.h>
struct employee {

int ID;
char name[31];
double salary;
};

int main() {
struct employee emp[6];
char firstletter;
printf("enter 6 employee records:\n");
for(int i = 0;i < 6;i++){
scanf("%d %s %lf",&emp[i].ID , emp[i].name, &emp[i].salary);
}
printf("search by first letter: ");
scanf(" %c", &firstletter);
for(int i = 0; i < 6;i++){
    if(emp[i].name[0] == toupper(firstletter)){
        printf("%d %s %.2lf\n", emp[i].ID,  emp[i].name , emp[i].salary);
    }
}
return 0;
}