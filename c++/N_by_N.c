#include <stdio.h>

int main() {
int n;
scanf("%d", &n);

int mat[n][n];

int sum = 0;
int max = -100000;
int min = 100000;

for(int i = 0 ; i < n ;i++){
    for(int j = 0;j < n ;j++){
        scanf("%d", &mat[i][j]);
        sum += mat[i][j];
        if(mat[i][j] > max){
            max = mat[i][j];
        }
        if(mat[i][j] < min){
            min = mat[i][j];
        }
    }
}

printf("sum: %d\n", sum);
printf("max: %d\n", max);
printf("min: %d\n", min);

printf("Minor diag: ");

for(int i = 0; i < n ; i++){
    printf("%d ", mat[i][n - i - 1]);
}
return 0;
}