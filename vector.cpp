#include<iostream>
#include<vector>
using namespace std;

int main() {

vector<int>vec = {1,2,3,4,5,6};

vector<int>::iterator it;
for(auto it = vec.begin();it !=vec.end();it++){

    cout<< *(it) <<" ";
}
vector<int>::reverse_iterator its;
for(auto its = vec.rbegin();its != vec.rend();its++){
    cout<< *(its) << " ";
}
cout<<"vec begin :"<<*(vec.end() - 2);
return 0;
}