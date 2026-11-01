#include<stdio.h>

int main() {
int n;
scanf("%d", &n);
int a[n] ; 

for(int i = 0;i < n  ; i++){
    scanf("%d", &a[i]);

}

for(int j = 0;j < (n / 2) ; j++){
    int e = a[j];
     a[j] = a[n - 1 - j];
     a[n - 1 - j] = e;
     
     
}
for(int q = 0;q < n;q++){
    printf("%d ", a[q]);
}

return 0;
}