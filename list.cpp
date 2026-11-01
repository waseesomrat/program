#include<iostream>
#include<list>
#include<vector>

using namespace std;
int main() {

    list<int>l = {1,2,3,4,5,6,8};

    for(int val:l){
        cout << val << " ";
    }




    return 0;
}