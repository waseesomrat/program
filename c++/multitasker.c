#include <stdio.h>

int gcd(int a, int b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

void GCD_LCM(int n1, int n2, int *out_gcd, int *out_lcm)
{
    int c = gcd(n1, n2);
    *out_gcd = c;
    *out_lcm = (n1 / c) * n2;

    int d = *out_lcm;
}

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    int c, d;

    GCD_LCM(a, b, &c, &d);

    printf("gcd: %d\n", c);
    printf("lcm: %d\n", d);

    return 0;
}
