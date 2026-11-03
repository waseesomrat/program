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
        long long sum = 0;
        long long arr[200005];
         for(long long i = 0;i < x; i++){
            cin >> arr[i];
         }
        for(long long i = 0;i < x-1; i++){
            if(arr[i] > arr[i+1]){
                sum += arr[i] - arr[i + 1];
                arr[i + 1] = arr[i];
            }


        }
        cout<<sum<<endl;
        return 0;
    }