#include <stdio.h>

int main() {
    int ch;

    freopen("file.txt", "r", stdin);     
    freopen("newfile.txt", "w", stdout); 

    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }
    return 0;
}