#include <stdio.h>

void find(int mat[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(mat[i][j] == 1)
                printf("one is in %d row and %d col\n", i + 1, j + 1);
                return;
        }
    }
    return ;
}
int main() {
    int mat[5][5];
printf("enter 5 x 5 matrix :");
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    find(mat);
return 0;
}