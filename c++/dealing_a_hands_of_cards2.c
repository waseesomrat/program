#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {

int used[4][13] = {0};

char suits[4][10] = {"diamonds", "spades", "clubs", "hearts"};

char ranks[13][6] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};

srand(time(NULL));
int count = 0;
int n;
scanf("%d", &n);
while(count < n){
    int s = rand() % 4;
    int r = rand() % 13;
    if(used[s][r] == 0){
        used [s][r] = 1;
    }
    printf("%s%s\n",ranks[r],suits[s]);
    count++;
}
}
