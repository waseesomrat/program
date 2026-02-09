#include<iostream>

using namespace std;
int operation(long long x , long long y){



    cout<< x<< " + " << y << " = " <<  x + y<<endl; 
    cout<< x<< " * " << y << " = " <<  x * y<<endl; 
    cout<< x<< " - " << y << " = " << x - y<<endl; 
return 0;
}



int main() {
long long a , b ;

    cin>> a >> b;
    operation(a , b);
    return 0;
}