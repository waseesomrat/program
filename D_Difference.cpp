#include<iostream>


using namespace std;
int difference(long long x , long long y, long long z , long long q){
return (x * y) - (z * q);
}

int main() {

long long a,b,c,d;

cin>> a >> b >> c >> d;


difference(a , b ,c ,d);
cout<<"Difference = "<< ((a * b) - (c * d));
return 0;
}