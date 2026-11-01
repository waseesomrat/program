#include<iostream>

using namespace std;

long long summation(long long n){


return n * (n + 1) / 2;
}

int main() {

    long long a;
    cin>> a;
    cout<<summation(a);
    return 0;
}



