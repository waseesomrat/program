#include <stdio.h>

int main()
{

    int n, rem;

    scanf("%d", &n);

    while (n > 0)
    {

        rem = n % 16;

        if (rem < 10)
        {
            printf("%d", rem);
        }
        else
        {
            printf("%c", rem - 10 + 'A');
        }
        n = n / 16;
    }
    return 0;
}