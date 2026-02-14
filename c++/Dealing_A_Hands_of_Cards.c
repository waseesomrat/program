#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int used[52] = {0};
    int n;

    printf("Enter number of cards: ");
    scanf("%d", &n);

    if(n > 52){
        printf("Cannot pick more than 52 cards\n");
        return 0;
    }

    printf("Your hand: ");

    int count = 0;

    while(count < n){
        int r = rand() % 52;
        if(used[r] == 0){
            used[r] = 1;
            int suit = r / 13;
            int rank = r % 13;

            // Print rank
            if(rank <= 8)
                printf("%d", rank + 2);
            else if(rank == 9)
                printf("J");
            else if(rank == 10)
                printf("Q");
            else if(rank == 11)
                printf("K");
            else
                printf("A");

            // Print suit
            if(suit == 0)
                printf("c ");
            else if(suit == 1)
                printf("d ");
            else if(suit == 2)
                printf("h ");
            else
                printf("s ");

            count++;
        }
    }

    return 0;
}
