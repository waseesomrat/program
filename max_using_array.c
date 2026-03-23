#include<stdio.h>

int main() {

int n;
scanf("%d", &n);
int arr[n];
int max = -13333;
int index = 0;

for(int i = 0;i < n;i++){
scanf("%d", &arr[i]);
}

for(int i = 0;i < n;i++){
    if(arr[i] >max){
        max = arr[i];
    }
    index = i;
}
printf("%d %d", index + 1,arr[index]);
}