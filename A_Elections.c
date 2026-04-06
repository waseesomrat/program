#include<stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int x , y  ,z ;
       
        int f = 0;
        scanf("%d %d %d", &x , &y, &z);
         int a = x;
        int b = y;
        int c = z;
        if(a == b && b == c){
           f = 0;
        }
        else if(x >= y && x >= z){
            b = a - b + 1;
            c = a - c + 1;
            a = 0;
            f = 1;
    }
            else if(y >= x && y >= z){
            x = y - x + 1;
            z = y - z + 1;
             y = 0;
             f = 1;

    }
            else if(z >= y && z >= x){
            x = z - x + 1;
            y = z - y + 1;
            z = 0;
            f = 1;
    }
   

    if(f == 0){
         printf("%d %d %d\n", x + 1 , y + 1 , z + 1);
    }
    else if(f == 1){
    printf("%d %d %d\n", x , y, z);
    }
}
return 0;
}
