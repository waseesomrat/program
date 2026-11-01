#include<stdio.h>
typedef struct{
int type;
union {

    int pages;
    float weight;
} data;
}item;

int main() {

item x;

x.type = 1;
x.data.pages = 100;
printf("%d", x.data.pages);

}