#include<iostream>

using namespace std;

bool check(int x){

if(x == 1999){
    cout<<"Correct"<<endl;
    return true;
}
else   
    cout<<"Wrong"<<endl;
return false;
}

int main() {

int a;

while(cin >>a){
   if(check(a)){
    break;
   }
    
}
return 0;
}