#include<stdio.h>
int getSquare(int n) {
    return n * n;  // Handing the result back
}

int main() {
    int result = getSquare(5); // You "catch" the answer in the 'result' variable
    printf("%d", result);      // Now you can use it
    return 0;
}