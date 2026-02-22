#include<iostream>

using namespace std;


void n_lines(int n){

if(n == 0)
return;



    n_lines(n -  1);
        cout<<n<<endl;
}

int main() {

int m;
cin>>m;

n_lines(m);


return 0;
}
