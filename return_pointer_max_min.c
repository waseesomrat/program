#include<stdio.h>
int *max_min(int a[], int n){

static int result[2];

result[0] = a[0];
result[1] = a[0];

for(int i = 0;i < n;i++){
    if(a[i]>result[0]){
        result[0] = a[i];
    }
    if(a[i] < result[1]){
        result[1] = a[i];
    }
}
    return result;
}


int main() {



int arr[] = { 10, -65 , 33 , -23, 43};

int max;
int min;

int *res = max_min(arr,5);

printf("MAX: %d\n", res[0]);
printf("MIN: %d\n", res[1]);
}