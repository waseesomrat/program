#include <stdio.h>

int main() {

    int g1,g2,g3,g4;

    int egg,kept;

    printf("enter initial geese count:");
    scanf("%d", &g1);
    

    egg= g1*13;
    kept= (egg + 1)/2;
    g2 = kept + g1;


    egg = g2*13;
    kept= (egg+1)/2;
    g3= kept + g2;
 
    egg = 13*g3;
    kept=(egg+1)/2;
    g4= kept + g3;


printf("Geese count after year1:%d\n",g2);
printf("Geese count after year2:%d\n",g3);
printf("Geese count after year3:%d\n",g4);
    return 0;
}