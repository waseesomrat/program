#include<iostream>

using namespace std;
int main() {
int n;
cin >> n;
if(n >= 2){
for(int w = 2;w <= n;(w ++)){
    cout<<w++<<"\n";
}
}
else
cout<<"-1";
return 0;
}