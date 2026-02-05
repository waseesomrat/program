#include <stdio.h>

int main() {


int time, m, h;


printf("Enter a 24-hour time:");
scanf("%d:%d", &h , &m);

time = (60 *h) + m;

if( time < (((8 + 9) * 60 + 43) / 2)) 
    printf("closest departure time is 08:00 a.m., arriving at 10:16am");

    else if( time < 631) 
    printf("closest departure time is 09:43 p.m., arriving at 11:52am");
    else if( time < 723)
    printf("closest departure time is 11:19 a.m., arriving at 1:52pm");
    else if( time < 803)
    printf("closest departure time is 12:47 p.m., arriving at 3:00pm");
     else if( time < 892) 
    printf("closest departure time is 02:00 p.m., arriving at 4:08pm");
    else if( time < 1042)
    printf("closest departure time is 03:45 p.m., arriving at 5:55pm");
    else if( time < 1222) 
    printf("closest departure time is 07:00 p.m., arriving at 9:20pm");
    else 
    printf("closest departure time is 09:45 p.m., arriving at 11:58pm");



return 0;

}