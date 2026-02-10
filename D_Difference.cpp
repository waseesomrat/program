#include<iostream>


using namespace std;
int difference(long long x , long long y, long long z , long long q){

long long result= (x * y) - (z * q);

cout<<"Difference = "<< result;

return 0;
}

int main() {

long long a,b,c,d;

cin>> a >> b >> c >> d;


difference(a , b ,c ,d);

return 0;
}