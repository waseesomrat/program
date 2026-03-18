#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    while (n--)
    {

        int m, count = 0, p = 0;
        scanf("%d", &m);
        int k = 0;
        if (m % 1 == 0)
            k = 1;
        if ((m % 2 == 0) && ((m / 2 == 1) || (m / 2 == 11) || (m / 2 == 111) || (m / 2 == 1111)) )
            k = 2;
        if (m % 3 == 0)
            k = 3;
         if ((m % 4 == 0) && ((m / 4 == 1) || (m / 4 == 11) || (m / 4 == 111) || (m / 4 == 1111)) )
            k = 4;
        if (m % 5 == 0)
            k = 5;
        if ((m % 6 == 0) && ((m / 6 == 1) || (m / 6 == 11) || (m / 6 == 111) || (m / 6 == 1111)) )
            k = 6;
        if (m % 7 == 0)
            k = 7;
        if (m % 8 == 0)
            k = 8;
        if (m % 9 == 0)
            k = 9;

        while (m > 0)
        {
            m /= 10;
            count++;
            if (count == 1)
            {
                p = (k - 1) * 10 + 1;
            }
            if (count == 2)
            {
                p = (k - 1) * 10 + 3;
            }
            if (count == 3)
            {
                p = (k - 1) * 10 + 6;
            }
            if (count == 4)
            {
                p = (k - 1) * 10 + 10;
            }
        }
        printf("%d\n", p);
    }
    return 0;
}