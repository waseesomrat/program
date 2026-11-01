#include <stdio.h>

int *GetPtrToMax(int arr[], int len){



    int *p = arr; // pointing to first element of the array;
    int *Maxptr = arr;// assuming 1st element as max;

    for(int i = 0;i < len;i++){
        p++; // moves pointer to next element for every iteration;

        if(*p > *Maxptr){ 
            Maxptr = p;
        }
    }


return Maxptr;
}
int main() {


int n;

int a[1000];
printf("Number of elements: ");
scanf("%d", &n);
for(int i = 0;i < n;i++){
    scanf("%d", &a[i]);
}


int  *ptr = GetPtrToMax(a, n);

printf("%d", *ptr);
return 0;
}