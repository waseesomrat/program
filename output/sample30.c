#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long n1, n2, n3;
    char operator;

    // Corrected scanf to use %llu for unsigned long long
    if (scanf("%llu %llu %c", &n1, &n2, &operator) != 3) {
        return 1; 
    }

    switch(operator) {
        case '+': n3 = n1 + n2; break;
        case '-': 
            // Warning: unsigned subtraction n1 < n2 will cause wrap-around
            n3 = n1 - n2; 
            break;
        case '*': n3 = n1 * n2; break;
        case '/': 
            if(n2 != 0) n3 = n1 / n2; 
            else n3 = 0; 
            break;
        case '%': 
            if(n2 != 0) n3 = n1 % n2; 
            else n3 = 0; 
            break;
        case '^': 
            n3 = 1; // Initialize result to 1
            for(unsigned long long i = 1; i <= n2; i++) {
                n3 *= n1; // Multiply the base (n1) by itself n2 times
            }
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    // Print the final result once after the switch
    printf("%llu\n", n3);

    return 0;
}