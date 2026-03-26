#include<stdio.h>

int main() {

    int i , f,g = 0;
    scanf("%d %d" , &i , &f);
    for(int i;i <= f;i++){
        int count_digit = 0,times = 0;
        int a = i;
        while(a!= 0){
            int r = a % 10;
            a/= 10;
            count_digit++;
            if(r!= 0 && i % r == 0){
                times++;
            }
        }
        if(count_digit == times){
            printf("%d ", i);
            g++;
    }    
    }
  printf("\n%d\n", g);
}