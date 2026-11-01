#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int x;
    scanf("%d", &x);
    int f = 0;
    for (int i = 0; i < n; i++)
    {

        if (x == array[i])
        {
            printf("%d", i);
        
        f = 1;
        break;
    }
}
if (!f)
{
    printf("-1");
}
}