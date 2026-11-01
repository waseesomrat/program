#include<iostream>
using namespace std;

void pattern(int n){


    for(int i = 1;i <= n;i++){
        char ch = 'A';
        for(char j = 'A';j <'A' + n ;j++){
            cout<<j<<" ";
        
        }
        cout<<endl;
    }
    

}

int main() {

int a;

cin>>a;

pattern(a);
return 0;
}