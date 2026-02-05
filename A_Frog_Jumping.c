#include <stdio.h>

int main()
{

    int n;
    long long a, b, c, d;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%lld %lld %lld", &a, &b, &c);

        if (c % 2!= 0)
        {

            long long d = (c / 2) + 1;
            long long e = c - d;
            long long f = a * d;
            long long g = b * e;
            long long h = f + (-1 * g);
              printf("%lld\n", h);
        }
        if (c % 2 == 0)
        {
        long long h = (( a * (c / 2)) + ((-1*b) * (c / 2)));
          printf("%lld\n", h);
        }
    }

    return 0;
}