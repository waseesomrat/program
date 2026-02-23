#include <stdio.h>

int main() {

    int array[10];
    int *p;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }
    p = array;
    int max = *p;
    int min = *p;
    int maxPos = 0;
    int minPos = 0;
    for (int i = 0; i < 10; i++) {
        if (*(p + i) > max) {
            max = *(p + i);
            maxPos = i;
        }
        if (*(p + i) < min) {
            min = *(p + i);
            minPos = i;
        }
    }
    printf("Max value: %d at position %d\n", max, maxPos);
    printf("Min value: %d at position %d\n", min, minPos);
    printf("Difference: %d\n", max - min);
    return 0;
}