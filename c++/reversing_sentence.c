#include <stdio.h>
#include <ctype.h>

int readline(char str[], int size)
{
    int i = 0, c;

    while ((c = getchar()) != '\n' && c != EOF)
    {
        if (i < size - 1)
            str[i++] = (char)c;
    }
    str[i] = '\0';
    return i;
}

void reverseword(char str[], int len)
{
    char punct = '\0';

    if (len > 0 && ispunct(str[len - 1]))
    {
        punct = str[len - 1];
        str[len - 1] = '\0';
        len--;
    }

    int i = len - 1;

    while (i >= 0)
    {
        while (i >= 0 && str[i] == ' ')
            i--;

        if (i < 0)
            break;

        int end = i;

        while (i >= 0 && str[i] != ' ')
            i--;

        int start = i + 1;

        for (int j = start; j <= end; j++)
        {
            printf("%c", str[j]);   // ✅ FIXED
        }

        printf(" ");  // ✅ moved outside
    }

    // ✅ print punctuation once
    if (punct != '\0')
    {
        printf("%c", punct);
    }
}

int main()
{
    char sen[1000];

    int len = readline(sen, 1000);
    reverseword(sen, len);

    printf("\n");
    return 0;
}