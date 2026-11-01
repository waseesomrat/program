#include <stdio.h>

void freq(char str[]){

int freq[26] = {0};

for(int i = 0;str[i] != '\0';i++){
    freq[str[i] - 'a']++;
}
for(int i = 0;i < 26;i++){
    if(freq[i] > 0){
        printf("%c=%d\n",i + 'a', freq[i]);
    }
}
}
int main() {

    char str[100];
    scanf("%s",str);
    freq(str);
    return 0;
}