#include<stdio.h>

int main() {

char a[204] , b[205] , con[409];


int lenA = 0,lenB = 0;

scanf("%s %s", a, b);

while(a[lenA] != '\0')
    lenA++;
while(b[lenB] != '\0')
    lenB++;
    printf("%d %d\n", lenA , lenB);

    if((lenA + lenB) > 200){
        printf("Buffer overflow\n");
    }
    else
    {

   int i , j;

   for(i = 0;i < lenA;i++){
    con[i] = a[i];}
    con[i] = ' ';
        for(j = 0;j < lenB;j++){
            con[i+1+ j] = b[j];
   }

con[i +1 + j] = '\0';
    }

printf("%s\n", con);

int temp;

temp = a[0];
a[0] = b[0];
b[0] = temp;

printf("%s %s", a , b);
    return 0;

}