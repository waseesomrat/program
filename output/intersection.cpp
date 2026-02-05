#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void intersection( vector<int>a,int x,vector<int>b, int y){

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i = 0 , j= 0; 
    while(i < x && j < y){

        if(a[i]<b[j]){
            i++;
        }
         else if(a[i]>b[j]){
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }

    }

}




int main( ) {

vector<int>arr1 = {9,2,4,5,6};
vector<int>arr2 = {1,3,4,5,6};


int n = arr1.size();
int m = arr2.size();

intersection(arr1 , n ,arr2 , m); 
return 0;
}