#include <stdio.h>

int main()
{

    int a[10] = {};
    int c = 0;
    int i = 0;

    while ((c = getchar()) != '\n' && c != EOF)
    {

        if (c >= '0' && c <= '9')
        {

            int digit = c - '0';

            if (a[digit] == 1)
            {
                i = 1;
                break;
            }
            a[digit] = 1;
        }
    }
    if(i == 1){
        printf("Repeated " );
    }
    else
         printf("Not Repeated");
}
