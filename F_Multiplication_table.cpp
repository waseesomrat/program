#include<iostream>

using namespace std;

void multi(int x, int y){


    for(int i = 1;i <= 12;i++){
        
        y = 1 * i;
        
        cout<<1 * i << "=" << y<<endl;

    }
}

int main() {

    int a,y;
    cin>>a;
    multi(a , y);
    return 0;
}
