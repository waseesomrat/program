#include<iostream>

using namespace std;

int Last_two_digits(unsigned long long n){


return n % 100;
}

int main() {

long long a,b,c,d;
    cin>>a >>b>> c>> d;

    if(a >= 1000000000 || 
       b >= 1000000000 ||
       c >= 1000000000 ||
       d >= 1000000000){

       cout<< "00";
 
        return 0;
       }
        unsigned long long x = 1;

       x = (x * (a % 100)) % 100;
       x = (x * (b % 100)) % 100;
       x = (x * (c % 100)) % 100;
       x = (x * (d % 100)) % 100;

        int result = Last_two_digits(x);

        if(result < 10)
            cout<<"0"<<result;
        else
        cout<< result;
        return 0;
}