#include<stdio.h>

int main() {

    int row, col;
    scanf("%d %d", &row, &col);

    int a[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Row sums:\n");
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += a[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, sum);
    }
    printf("\nColumn sums:\n");
    for(int j = 0; j < col; j++){
        int sum = 0;
        for(int i = 0;i < row; i++){
            sum += a[i][j];
        }
        printf("Column %d sum = %d\n", j + 1, sum);
    }

    return 0;
}
