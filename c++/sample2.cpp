#include<stdio.h>


void split_date(int day_of_year,int year,int *month,int *day){

int x[] = {31,28,31,30,31,30,31,31,30,31,30,31};
int date;
int leap = (year % 400 == 0 || (year % 100 != 0) && (year % 4 == 0));

*month = 1;

if(leap){
x[1] = 29;
}


for(int i = 0;i < 12 ; i++){
if(x[i]>=day_of_year){
    *day = day_of_year;
    return;
}
day_of_year -=x[i];
(*month)++;
}
 
}



int main() {


int d;

printf("day of year: ");
scanf("%d", &d);
int y;
printf("year: ");
scanf("%d", &y);

int m , da;

split_date(d,y,&m,&da);

switch(m){

case 1: printf("jan ");break;
case 2: printf("feb ");break;
case 3: printf("mar ");break;
case 4: printf("apr ");break;
case 5: printf("may ");break;
case 6: printf("jun ");break;
case 7: printf("july ");break;
case 8: printf("aug ");break;
case 9: printf("sept ");break;
case 10: printf("oct ");break;
case 11: printf("nov ");break;
case 12: printf("dec ");break;

}

printf("%d", da);

}