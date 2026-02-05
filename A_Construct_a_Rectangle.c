#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if((a == b + c) || (b == a+c) || ( c == a+b)){
            printf("YES\n");
        }
          else if(((a ==b) && (c%2!=0)) || ((a==c ) && (b %2 !=0)) || ((c==b ) && (a%2!=0))){
            printf("NO\n");}
                else if((a != b) && (a!=c) && (b!= c)){
            printf("NO\n");
        }
        else if(((c%2==0) && (a ==b) )|| ((a%2==0) && (b==c )) || ( (b%2==0) && (a==c ))){
            printf("YES\n");
        } 

        }
    return 0;
}
