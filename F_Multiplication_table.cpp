#include<iostream>

using namespace std;

void multi(int a){


    for(int i = 1;i <= 12;i++){
        
       int y = a * i;
        
        cout<<a<<" * "<<i<<" "<< "=" <<" "<<y<<endl;

    }
}

int main() {

    int a;
    cin>>a;
    multi(a);
    return 0;
}
