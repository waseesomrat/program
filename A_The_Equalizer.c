#include<stdio.h>
 
 
int main() {
 
int t;
scanf("%d", &t);
 
while(t--){
 
int x ,y;
scanf("%d %d", &x , &y);
 
if(x == 1 && y == 1){
   printf("YES\n");}
else if((x % 2 == 0 || y % 2 == 0 )){
    printf("YES\n");
}
else
    printf("NO\n");
}
return 0;
}
 