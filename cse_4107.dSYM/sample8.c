#include <stdio.h>

int main() {


int k,n,w,count,sum,output;
sum = 0;
count = 1;

scanf("%d %d %d" ,&k,&w, &n);
if(k >= 1 && k <= 1000 && n <=1000 && n>=1){
while(count <= n){

sum +=count;
count++;

output = k*sum - w;
}
}
if( output > 0){
    printf("%d", output);
}
else
printf("0");
return 0;
}