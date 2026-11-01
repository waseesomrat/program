#include<stdio.h>
#include<math.h>
int isprime(int n){
if(n < 2)
 return 0;
    for(int i = 2;i <= sqrt(n);i++){

        if(n % i==0){
            return 0;
        }  
    }
    return 1;
}
int perf(int n){
int sum = 0;
for(int j = 1;j < n;j++){
        if(n % j == 0)
        sum +=  j;
}
  return (sum == n);
}
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);

if(isprime(n)) printf("%d is prime\n", n);
else printf("%d is not prime\n", n);
if(perf(n)) printf("%d is perfect ", n);
else printf("%d is not  perfect", n);
return 0;
}