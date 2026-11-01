#include<stdio.h>

int main() {

int n;
scanf("%d", &n);

while(n--){


int x,arr[100],count = 0,count2 = 0,result = 0;
scanf("%d", &x);

for(int i = 0 ; x > 0; i++){
    int y = x % 2;
        arr[i] = y;
        x = x / 2;
        count++;}
for(int j = count - 1 ; j >= 0 ; j--){
    // printf("%d", arr[j]);
    if(arr[j] == 1){
        count2++;
    }
   
}
for(int i = 0;i < count2;i++){
    result = result * 2 + 1;
}
 printf("%d", result);
printf("\n");
}
return 0;
}