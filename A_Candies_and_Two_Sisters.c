#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
    int n;
    scanf("%d", &n);
    
    int temp;
    int digit_sum = 0;
    scanf("%d", &temp);
    int max_value = temp;
    int num = temp;
    if (num < 0) num = -num;
    while (num > 0) {
        digit_sum += num % 10;
        num /= 10;
    }
    for (int i = 1; i < n; i++) {
        scanf("%d", &temp);
        if (temp > max_value) {
            max_value = temp;
        }
        num = temp;
        if (num < 0) num = -num;
        if (num == 0) {
            digit_sum += 0;
        } else {
            while (num > 0) {
                digit_sum += num % 10;
                num /= 10;
            }
        }
    }

    int result =max_value * n -digit_sum;
    printf("%d\n", result);
}
    return 0;
}