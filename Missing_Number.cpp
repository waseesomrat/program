    #include <iostream>
    #include <vector>
    #include <cstring>
    #include <algorithm>
    using namespace std;
    
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        long long x;
        cin >> x;
        long long y;
        long long z =0 ;
        long sum = 0;
         y = x*(x + 1) / 2;
        
        for ( long long i = 1; i < x;i++){
          cin >> z;
          sum = sum + z;
          
        }
        cout << y - sum;
        return 0;
    }