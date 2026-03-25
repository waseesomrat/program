#include<stdio.h>
    int* findeven(int q[], int m){
        for(int i = 0;i < m;i++){
            if((q[i]) % 2 == 0){
                return &q[i];
            }
        }
        return NULL;
    }
int main() {

int arr[] = {1,3,7,8,9};

int *p = findeven(arr, 5);

if(p != NULL){
    printf("%d", *p);
}
}