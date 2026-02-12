#include<iostream>
using namespace std;
void age(int n,int &z ,int &q ,int &da){
 z = n / 365;
 n = n % 365;
 q = n / 30;
da = n % 30;
}
int main() {
int a,year,month,days;
cin>>a;
age(a,year,month,days);
cout<<year<<" "<<"years"<<endl;
cout<<month<<" "<<"months"<<endl;
cout<<days<<" "<<"days"<<endl;
return 0;
}