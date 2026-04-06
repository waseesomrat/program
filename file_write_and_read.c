#include<stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");
    fprintf(fp, "1000\n200\n");
    fclose(fp);
    int x;
    fp = fopen("data.txt", "r");
    while(fscanf(fp, "%d", &x) != EOF){
        printf("%d\n", x);
    }
    fclose(fp);
    return 0;
}
