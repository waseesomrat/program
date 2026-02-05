#include <stdio.h>

int main()
{

    int row, col;
    scanf("%d\n", &row);

    scanf("%d", &col);

    int arr[row][col];
    for (int k = 0; k < row; k++)
    {

        for (int l = 0; l < col; l++)
        {
            scanf("%d", &arr[k][l]);
        }
    }
    printf("{");
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            
           if(j == 0){
            printf("{");
            
           }
           if(j != col -1){

            printf("%d, ", arr[i][j]);
           }
           else{
            printf("%d ", arr[i][j]);
           }

             if(j == col - 1){
            printf("}");
           } 
           
            
        }if(i != row -1){
        printf(",");}
        printf("\n");
    }
    printf("}");
    return 0;
}