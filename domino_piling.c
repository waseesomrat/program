#include <stdio.h>

int main() {
    int M, N, max_dominoes;

    scanf("%d %d", &M, &N);

    if (M > 0 && M <= 16 && N > 0 && N <= 16) {
        max_dominoes = (M * N) / 2;
        printf("%d\n", max_dominoes);
    }

    return 0;
}
