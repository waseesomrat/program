#include <stdio.h>
float sum_of_marks(float marks[], int n, char ch) {
    float sum = 0;
    if (ch == 'B' || ch == 'b') {
        for (int i = 0; i < n; i += 2)
            sum += marks[i];
    } 
    else if (ch == 'G' || ch == 'g') {
        for (int i = 1; i < n; i += 2)
            sum += marks[i];
    }
    return sum;
}
int main() {
    int n;
    char ch;
    float marks[100];
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter marks:\n");
    for (int i = 0; i < n; i++)
        scanf("%f", &marks[i]);
    printf("Enter choice (B/b for boys, G/g for girls): ");
    scanf(" %c", &ch);
    printf("Total marks: %.2f\n", sum_of_marks(marks, n, ch));
    return 0;
}
