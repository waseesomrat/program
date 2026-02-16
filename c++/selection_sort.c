#include<stdio.h>
void selection_sort(int a[],int n){
if(n <= 1) return;
int max = 0;

for(int i = 0;i < n;i++){
    if(a[i] > a[max]){
        max = i;
    }

}
int temp;
temp = a[max];
a[max] = a[n - 1];
a[n - 1] = temp;
selection_sort(a, n - 1);


}


int main() {

printf("Enter numbers: ");

int num;
scanf("%d", &num);

int a[num];
for(int i = 0;i < num;i++){
    scanf("%d", &a[i]);
}
    selection_sort(a , num);

    printf("Sorted array");
    for(int j = 0;j < num; j++){
        printf("%d ",a[j]);
    }

return 0;
}