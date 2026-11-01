#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
    int n;
    scanf("%d", &n);
    int even = 0, odd = 0;
        for(int i = 0; i < 2*n; i++){
            int x;
            scanf("%d", &x);
            if(x % 2 == 0)
            even++;
            else
            odd++;
        }
        if (even == n && odd == n)
        printf("Yes\n");
        else
        printf("No\n");
    }
return 0;
}
