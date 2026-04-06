#include<stdio.h>

int main() {

char s[101];
int widths[26];
fgets(s,101,stdin);
for(int i = 0;i < 26;i++){
    scanf("%d", &widths[i]);}
    int line = 1,width = 0;

    for(int i = 0;s[i] != '\0';i++){
        int w;
        if(s[i] == ' ')
        w = 6;
        else if(s[i] >= 'a' && s[i] <= 'z')
        w = widths[s[i] - 'a'];
        else
        continue;
        if(width + w > 100){
            line++;
            width = w;
        }
        else {
            width += w;
        }
    }
    printf("Total line: %d\n", line);
        printf("width of last line: %d", width);
    return 0;
}
