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
        int temp = m;
        while(temp >= 10){
            temp /= 10;
        }
        k = temp;

        int temp2 = m;
        while (temp2 > 0)
        {
            temp2 /= 10;
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