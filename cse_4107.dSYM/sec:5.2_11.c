#include <stdio.h>

int main() {

    int a,b;
    char  *digit1 = "";
    char  *digit2 = "";
printf("Enter a two-digit number:");

scanf("%d %d", &a,&b);

switch( a) {
//case 1: printf("one"); break;
case 2: digit1 = "twenty"; break;
case 3: digit1 = "thirty"; break;
case 4: digit1 ="forty"; break;
case 5: digit1 ="fifty"; break;
case 6: digit1 ="sixty"; break;
case 7: digit1 ="seventy"; break;
case 8: digit1 ="eighty"; break;
case 9: digit1 ="ninety"; break;


}

switch( b){

case 1: digit2 = "one"; break;
case 2: digit2 = "two"; break;
case 3: digit2 ="three"; break;
case 4: digit2 ="four"; break;
case 5: digit2 ="five"; break;
case 6: digit2 ="six"; break;
case 7: digit2 ="seven"; break;
case 8: digit2 ="eight"; break;
case 9: digit2 ="nine"; break;



    
}
if ( b == 0)
printf("you entered")

printf("You entered the number %s-%s", digit1, digit2);

return 0;

}