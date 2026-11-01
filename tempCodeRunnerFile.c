#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    while (n--)
    {
        int x;
        scanf("%d", &x);
        int a[x];
        int f = 0;
        for (int i = 0; i < x; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < x; i++){
        
            if ((a[i] != 1) && (67 % a[i]) == 0)
            {
                f = 1;
                printf("YES\n");
                break;
            }
        }
        if (f == 0)
        {
            printf("NO\n");
        }
    }
        return 0;
    }