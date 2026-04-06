#include<stdio.h>

float calculatesimpleinterest(float , float, float );
int main() {

float pr,rate,time;

scanf("%f %f %f", &pr , & rate , &time);

float x = calculatesimpleinterest(pr,rate,time);

printf("%.2f", x);
return 0;
}

float calculatesimpleinterest(float p, float r, float t){



return (p * r * t) / 100;

}