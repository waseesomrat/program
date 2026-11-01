#include<stdio.h>

int main() {


int a[5][5] = {};


for(int i = 0; i < 5;i++){

  

for(int j = 0; j < 5;j++){

    scanf("%d ", &a[i][j]);
}

}

for(int k = 0;k < 5;k++){
    int sum = 0;
    int sum1 = 0;
    for(int q = 0;q < 5; q++){
      
        sum = sum + a[k][q];
    
        sum1 = sum1 + a[q][k];
       
        

    }

 printf("%d ", sum);
 printf("%d ", sum1);
}



return 0;
}