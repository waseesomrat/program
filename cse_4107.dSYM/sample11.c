#include <stdio.h>
int main() {

int row;

scanf("%d", &row);

char max = 'J';

for(int i = row; i >= 1; i--){

    for(int j = 1; j<= i;j++){
        printf("%c ", max);
        max--;
    }

    printf("\n");

}
return 0;
}