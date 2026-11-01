#include <stdio.h>

int main() {

int n1,n2,n3,n4;
printf("Enter four integers:");
scanf("%d %d %d %d",&n1,&n2,&n3,&n4 );
int largest, lowest;
if( n1 >= n2 && n2 >= n3 && n3 >= n4)
    largest = n1;
    
    else if(n2 >= n1 && n2 >= n3 && n2 >= n4)
    largest = n2;
    
    else if(n3 >= n1 && n3 >= n2 && n3 >= n4)
    largest = n3;
    else     
    largest = n4;
   

    if(n1<=n2 && n1<=n3 && n1<=n4)
        lowest = n1;
    else if(n2<=n3 && n2<=n1 && n2<=n4)
        lowest = n2; 
    else if(n3<=n1 && n3<=n2 && n3<=n4)
        lowest = n3;
    else 
    lowest = n4;
    

    printf("Largest:%d\n", largest);
    printf("Lowest:%d", lowest);
return 0;


}