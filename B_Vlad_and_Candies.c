#include<stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    while(t--) {

        int x;
        scanf("%d", &x);

        int y[x];

        for(int i = 0; i < x; i++){
            scanf("%d", &y[i]);
        }
        for(int i = 0; i < x - 1; i++){
            for(int j = 0; j < x - i - 1; j++){
                if(y[j] < y[j + 1]){
                    int temp = y[j];
                    y[j] = y[j + 1];
                    y[j + 1] = temp;
                }
            }
        }
        int max = y[0];
        int second = (x > 1) ? y[1] : 0;

        if(max - second > 1){
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }

    return 0;
}