#include <stdio.h>

int main() {

int arr[2][3] = {{1,2,3}, {4 , 5 ,7}};

int ar[10] = {0,1,2,3,4,5,6,7,8,9};
arr[0][1] = 30;
arr[1][2] = 234;
printf("%d\n", sizeof(arr[0][1]));
printf("%d\n", sizeof(arr[1][2]));
printf("%d", sizeof(ar));
return 0;

}