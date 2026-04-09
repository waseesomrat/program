#include<stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    while(t--) {

        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);

        int m = x;
        if(y > m) m = y;
        if(z > m) m = z;

        int count = (x == m) + (y == m) + (z == m);

        int a = (x == m && count == 1) ? 0 : (m - x + 1);
        int b = (y == m && count == 1) ? 0 : (m - y + 1);
        int c = (z == m && count == 1) ? 0 : (m - z + 1);

        printf("%d %d %d\n", a, b, c);
    }

    return 0;
}