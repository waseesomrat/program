#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
vector<int>arr = {0,1,2,3,4,9};
int st = 0, end = arr.size() - 1;
while(st < end){
swap(arr[st],arr[end]);
st++;
end--;
}
for(int i = 0;i < arr.size() ; i++){
    cout << arr[i] <<" ";
}

}


