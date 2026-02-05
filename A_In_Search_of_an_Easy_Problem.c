#include <stdio.h>

int main() {


int t;
scanf("%d" ,&t);
int sum = 0;

for(int i = 0;i < t;i++){
int a;
    scanf("%d", &a);
sum += a;
}

 if(sum > 0){
    printf("HARD\n");
}
else
printf("EASY\n");

return 0;
}