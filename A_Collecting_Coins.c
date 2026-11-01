#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int sum = a + b + c + d;
        if(sum % 3 != 0) {
            printf("NO\n");
            continue;
        }
        int target = sum / 3;

        if(a > target || b > target || c > target){
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }
    return 0;
}