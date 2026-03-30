#include<stdio.h>

int main(){
    int years;
    float interest_rate;
    scanf("%d %f", &years, &interest_rate);
    float value[2] = {200};
    for(int year=1; year<=years; year++){
            value[year] += value[year] * interest_rate/100;
            printf("%.2f ", value[year]);
        }
        printf("\n");
    }
