#include <stdio.h>

int main() {

int h,m;

printf("Enter a 24-hour time:");
scanf("%d:%d", &h, &m);


if(h < 12){

printf("Equivalent 12 - hour time:%d:%.2d AM\n", h,m);
}
else if(h > 12){
    h = h - 12;
    printf("Equivalent 12 - hour time:%d:%.2d PM\n", h,m);
}
else if(h == 12){
printf("Equivalent 12 - hour time:%d:%.2d PM\n", h,m);
}
return 0;
}


