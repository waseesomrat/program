#include<stdio.h>
int main() {

int t,n;
int count = 0;
int sum = 0;
scanf("%d %d", &t,&n);
int array[t];
for(int i = 0;i < t;i++){
    scanf("%d", &array[i]);
}
for(int i = 0; i < t - 1;i++){
    for(int j = 0; j < t - i - 1;j++){
        if(array[j] > array[j+1]){
            int swap = array[j];
            array[j] = array[j + 1];
            array[j + 1] = swap;
        }
    }
}
    if(sum <= n)
for(int i = 0;i < t;i++){
if(sum + array[i] <= n){
    sum += array[i];
    count++;
}
else{
break;
}
}
printf("%d", count);

}