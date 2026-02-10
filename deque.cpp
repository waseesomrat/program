#include<iostream>
#include<deque>

using namespace std;

int main() {


    deque<int>dq = {1,2,3,4,5};
    
    for(int val:dq){
        cout<< val << " ";
    }
     cout<< endl;

    cout<< dq[2];

    return 0;
}