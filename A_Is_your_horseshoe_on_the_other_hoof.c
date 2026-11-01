#include <stdio.h>

int main() {

     double a,b,c,d;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    if(a == b  && b == c&& c == d && a ==c && a==d && b ==d){
        printf("3");
    }
       else  if(a == b && b != c && c == d){
        printf("2");}
        else if(a != b &&b == c && c == d && d == b){
        printf("2");}
        else if(a == b && b == c && c && a == c &&a!= d){
        printf("2");}
        else if(a == b && b!= c &&c != d &&d ==a){
        printf("2");}
        else if(a != b && b== c && c !=d && a ==d){
            printf("2");
        }
        else if(a != b && b != c && a ==c && b ==d){
            printf("2");}
        else if(a == b && b != c && b!= d){
        printf("1");}
        else if(a != b && b != c && c == d){
        printf("1");}
        else if(a != b && b == c && c!= d && a!=d && a!=c){
        printf("1");}
        else if(a != b &&b != c && c!= d && d==a){
            printf("1");}
            else if(a !=b && b !=c && b ==d){
            printf("1");}
            else if(a == c && a !=b && a!= d && c!=d && c!=b){
                printf("1");}
            
            else 
            printf("0");
        return 0;
}