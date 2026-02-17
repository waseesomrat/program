#include <stdio.h>
#include <string.h>

int main()
{

    char ch[100];

    printf("Enter the sentence: ");
    fgets(ch, 100, stdin);
    int len = strlen(ch);
    if (ch[len - 1] == '\n')
    {
        ch[len - 1] = '\0';
    }

    for (int i = strlen(ch) - 1; i >= 0; i--)
    {
        {
            if (i == 0 || ch[i - 1] == ' ')
            {
                int j = i;
                while (ch[j] != ' ' && ch[j] != '\0')
                {
                    printf("%c", ch[j]);
                    j++;
                }
                printf(" ");
            }
        }
    }
    return 0;
}
