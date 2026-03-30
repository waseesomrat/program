#include <stdio.h>
int main() {
    char sen[100];
    int shift = 0;
    int i = 0;
    printf("Enter a message to be encrypted: ");
    fgets(sen, sizeof(sen), stdin);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
  for(int i = 0 ; sen[i] != '\0';i++){
        if(sen[i] >= 'A' && sen[i] <= 'Z'){
            sen[i] = ((sen[i] - 'A' + shift) % 26) + 'A';
        }
        else if(sen[i] >= 'a' && sen[i] <= 'z'){
            sen[i] = ((sen[i] - 'a' + shift) % 26) + 'a';
        }
    }
    printf("%s", sen);
    return 0;
}