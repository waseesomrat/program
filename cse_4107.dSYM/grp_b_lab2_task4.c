/* HH:MM:SS */

#include <stdio.h>

int main() {

    int SS;
    int MM;
    int HH;

    printf("Enter total SS: ");
    scanf("%d", &SS);

    if (SS < 0) {
        printf("Invalid input. Time cannot be negative.\n");
        return 0;
    }

    if (SS == 0) {
        printf("Invalid input.\n");
        return 0;
    }

    if (SS > 356400) {
        printf("Invalid input. Time exceeds maximum limit of 356400 SS.\n");
        return 0;
    } 
    HH = SS / 3600;
    MM = (SS % 3600) / 60;    // minutes
    SS = SS % 60;   // remaining seconds
   
     

    printf(" Output in required format: %02d:%02d:%02d\n", HH, MM, SS);

    return 0;
}
