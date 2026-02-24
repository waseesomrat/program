#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        char ch[100];
        char c;
        int length = 0;
        while ((c = getchar()) != '\n' && c != EOF)
        {
            ch[length++] = c;
        }
            if(length <= 10)
            {
                for(int i = 0;i < length ; i++){
                    putchar(ch[i]);
                }
            }
            else
                printf("%c%d%c", ch[0], length - 2 , ch[length - 1]);
        }
        printf("\n");
 }

