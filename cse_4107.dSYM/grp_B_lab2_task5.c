/*mountain climbers= 50% energy loss after every hour
  initial energy=100%
  input= hours of climbing
  output= remaining energy percentage after climbing for given hours */


#include <stdio.h>

int main() {

 int height, height2 , height3;

    printf("enter maximum height:");
        scanf("%d", &height    );

        height2 = height  + height/2;
        height3 = height + height2/2;

    printf("height after 1st hour:%d\n",height);
    printf("height after 2nd hour:%d\n",height2);
    printf("height after 3rd hour:%d\n",height3);

    return 0;




}