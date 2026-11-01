#include <stdio.h>
#include <ctype.h>

int main()
{
    int a1[26] = {0}, a2[26] = {0};
    int l1 = 0, l2 = 0;
    int ch;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        ch = toupper(ch);
        if (ch >= 'A' && ch <= 'Z')
        {
            a1[ch - 'A']++;
            l1++;
        }
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        ch = toupper(ch);
        if (ch >= 'A' && ch <= 'Z')
        {
            a2[ch - 'A']++;
            l2++;
        }
    }

    if (l1 != l2)
    {
        printf("NOT ANAGRAM\n");
        return 0;
    }

    for (int i = 0; i < 26; i++)
    {
        if (a1[i] != a2[i])
        {
            printf("NOT ANAGRAM\n");
            return 0;
        }
    }

    printf("ANAGRAM\n");
    return 0;
}
