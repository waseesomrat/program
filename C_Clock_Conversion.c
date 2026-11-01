#include <stdio.h>


int main() {


int t;
scanf("%d", &t);

while(t--){
int h,m;
scanf("%d:%d ", &h ,&m);
if(h > 0 && h < 12 && m >= 0 && m <= 59){
    printf("%.2d:%.2d AM\n", h , m);
}
else if( h > 12 && h < 24 && m <= 59 && m >= 0){
    int n = h - 12;
    printf("%.2d:%.2d PM\n", n ,m);
}
else if(h ==0 && m <= 59 && m >=0){
    int n = h + 12;
    printf("%.2d:%.2d AM\n", n , m);
}
else if( h == 12 && m <= 59 && m >= 0){
    printf("%.2d:%.2d PM\n", h ,m);
}
}
return 0;
}