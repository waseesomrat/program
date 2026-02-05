#include <stdio.h>

int main() {

int y,w,max,win;

scanf("%d %d", &y, &w);

max = ( y > w)? y : w;

win = 6 - max + 1;

if( win == 1) printf("1/6");
else if(win == 2 ) printf("1/3");
else if(win == 3) printf("1/2");
else if(win == 4) printf("2/3");
else if(win == 5) printf("5/6");
else if(win == 6) printf("1/1");
else if(win == 0) printf("0/1");

return 0;
}