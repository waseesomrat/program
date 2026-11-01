#include<iostream>
#include<vector>
#include<string>
#include<utility>

using namespace std;


int main() {


pair<string ,pair<int , char>> p = {"wasi" ,{1, 'q'}};

cout<<p.first<<endl;
cout<<p.second.second<<endl;
vector<pair<int , int>>vec = {{1,2}, {3,4}, {5,6}};

for(auto  p:vec){
    cout<< p.first <<" "<<p.second<<endl;
}
return 0;
}