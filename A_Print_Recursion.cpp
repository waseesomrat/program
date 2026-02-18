#include<iostream>


using namespace std;

void recursion(int n){

    if(n == 0) return;
        cout<<"I love Recursion"<<endl;
    


   recursion(n - 1);
}
int main() {
int m;
cin>>m;

    recursion(m);
 
    
return 0;
}

