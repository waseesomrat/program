#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(char *string) {

    int len = strlen(string);

    for (int i = 0; i < len / 2; i++) {
        if (string[i] != string[len - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {

    char str[100];
    scanf("%s", str);

    if (is_palindrome(str))
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
