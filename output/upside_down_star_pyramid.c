#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) // for rows
    {

        for (int j = 1; j <= n - i; j++) // for spaces
        {
            printf("  ");
        }
            for (int k = 1; k <= 2 * i - 1; k++) // for *
            {
                printf("* ");
            }

            printf("\n");
        
    }
        return 0;
    }
    