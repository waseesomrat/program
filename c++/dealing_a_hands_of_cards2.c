#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void dealcards(int n);

int main() {

    int n;
    printf("ENTETR NUMBER OF CARDS: ");
    scanf("%d", &n);
    dealcards(n);
return 0;
}

void dealcards(int n){

int used[4][13] = {0};


char suits[4][10] = {"diamond", "suits", "spades", "hearts"};
char ranks[13][5] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

srand(time(NULL));
int count = 0;

while(count < n){
int s = rand() % 4;
int r = rand() % 13;
    if(used[s][r] == 0){
        used[s][r] = 1;
        printf("%s of %s\n", ranks[r],suits[s]);
        count++;
    }
}
}