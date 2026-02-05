#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int marks[n];   // array size based on n
    int sum = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    float average = (float)sum / n;
    printf("%.2f", average);

    return 0;
}
