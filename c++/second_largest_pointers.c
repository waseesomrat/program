#include<stdio.h>
int* second_largest(int arr[], int n){
    int *max = &arr[0];
    int *second = &arr[0];
    for(int i = 0;i < n;i++){
        if(arr[i] > *max){
            second = max;
            max = &arr[i];
        }
        else if(arr[i] > *second && arr[i]!= *max){
            second = &arr[i];
        }
    }
    return second;
}
int main() {
int n;
printf("Enter n: \n");
scanf("%d", &n);
int array[n];
printf("Enter integers: ");
for(int i = 0;i < n;i++){
    scanf("%d", &array[i]);
}
int *p = second_largest(array, n);
    printf("%d", *p);
}