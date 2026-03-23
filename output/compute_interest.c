#include<stdio.h>

int main(){
    int years;
    float interest_rate;

    scanf("%d %f", &years, &interest_rate);

    float value[5] = {100.0,120.0,145.0,155.0,165.0};

    for(int year=1; year<=years; year++){
        for(int i=0;i<5;i++){
            value[i] += value[i] * interest_rate/100;
            printf("%.2f ", value[i]);
        }
        printf("\n");
    }
}