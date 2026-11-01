#include<stdio.h>
#include<math.h>
int main() {
int n;
long long r;
scanf("%d", &n);
while(n--){
int x;
scanf("%d", &x);
long long sum = 0;
long long a;
for(int i = 0;i< x;i++){
    scanf("%lld", &a);
    sum += a;
}
 r = sqrt(sum);
    if((r * r) == sum){
        printf("YES\n");
    }
else
printf("NO\n");
}
return 0;
}



