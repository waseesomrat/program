#include<stdio.h>

void repeat(int x){
    int count[10] = {0};
    while(x > 0){
        int digit = x % 10;
        count[digit]++;
        x = x / 10;
    }
    int found = 0;
    printf("Repeated digits with counts:\n");
    for(int i = 0; i < 10; i++){
        if(count[i] > 1){
            printf("%d -> %d times\n", i, count[i]);
            found = 1;
        }
    }

    if(!found){
        printf("No repeated digits\n");
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    repeat(n);

    return 0;
}