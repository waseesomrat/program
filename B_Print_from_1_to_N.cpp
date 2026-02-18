#include<iostream>

using namespace std;


void n_lines(int n){

if(n == 0)
return;

    cout<<n<<endl;

    n_lines(n - 1);
}

int main() {

int m;
cin>>m;

n_lines(m);


return 0;
}
