#include <stdio.h>

int main() {

int day,yr,month;

char *prmonth;
char *suffix;
scanf("%d %d %d", &day, &month, &yr);
switch(month){

case 1: prmonth = "January" ; break;
case 2: prmonth = "february" ; break;
case 3: prmonth = "march" ; break;
case 4: prmonth = "april" ; break;
case 5: prmonth = "may" ; break;
case 6: prmonth = "June" ; break;
case 7: prmonth = "July" ; break;
case 8: prmonth = "august" ; break;
case 9: prmonth = "spetember" ; break;
case 10: prmonth = "october" ; break;
case 11: prmonth = "november" ; break;
case 12: prmonth = "dec" ; break;
}
switch(day) {

case 1 :case 21 : case 31 : suffix = "st"; break;
case 2 : case 22 : suffix = "nd"; break;
case 3 : case 23 : suffix = "rd"; break;
default : suffix = "th" ; break;


}

printf("the%d%sday of %s of %d ", day,suffix,prmonth,yr);

return 0;
}