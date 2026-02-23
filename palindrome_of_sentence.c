#include <stdio.h>
#include <ctype.h>
int main()
{
    char message[100000];
    char ch;
    int len;
    char *start, *end;
    while ((ch = getchar()) != '\n' && (ch >= 'a' && ch <= 'z'))
    {
        if (ch >= 'A' && ch <= 'Z' || (ch >= 'a' && ch <= 'z'))
        {
            len++;
        }
    start = message;
    end = message - len - 1;
    while (start < end)
    {
        while (!((*start >= 'A' && *start <= 'Z') || (*start >= 'a' && *start <= 'z')))
        {
            start++;
        }
        while (!((*start >= 'A' && *start <= 'Z') || (*start >= 'a' && *start <= 'z')))
        { end--;
        }
    }
    if (toupper(*start != toupper(*end)))
    {
        printf("Not a palindrome");
        return 0;
    }
    start++;
    end--;
}
    printf("palindrome");
return 0;
}