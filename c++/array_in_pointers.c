#include<stdio.h>
    void print(int* p, int k){
        for(int i = 0;i< k;i++){
            printf("%d\n", *(p+i));
           
        }
         printf("%d", *(p) - *(p + 1));
    }

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    print(arr,n);
    return 0;
}