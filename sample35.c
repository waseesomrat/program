#include<stdio.h>

int main() {


int a[5][5] = {0};
int sum = 0;
int sum1 = 0;
for(int i = 0;i < 5;i++){


for( int j = 0;j < 5;j++) scanf("%d",&a[i][j]);
    
}

for(int k = 0 ; k < 5; k++){

    for(int l = 0;l < 5;l++){

        sum = sum + a[k][l];
        sum1 = sum1 + a[l][k];
    }
    printf("%d ", sum);
    sum=0;
     printf("%d ", sum1);
    sum1 = 0;
}







}