#include<stdio.h>

int main() {

int arr[3] = {10,100,1000};

int *p = arr;

printf("%d", *(p+1));
}
