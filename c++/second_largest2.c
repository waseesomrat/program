#include<stdio.h>
int second_largest(int arr[], int n){
    int max = -1000000000;
for(int i = 0;i < n;i++){
    if(arr[i] > max){
        max = arr[i];
    }
}
    int second = -10000000;

    for(int i = 0; i < n ; i++){
        if(arr[i] != max && arr[i] > second){
            second = arr[i];
        }
    }
    return second;
}
int main() {
int n;
int arr[n];
printf("Enter n :");

scanf("%d", &n);

for(int i = 0; i< n;i++){
    scanf("%d", &arr[i]);
}

printf("%d", second_largest(arr,n));


}