    #include <iostream>
    #include <vector>
    #include <cstring>
    #include <algorithm>
    using namespace std;
    
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    
        string s;
        cin>>s;
        int cur_length = 1;
        int max_length = 1;
        for(int i = 0; i + 1< s.length() ;i++){
            if(s[i] == s[i+1]){
                cur_length++;
                max_length = max(cur_length,max_length);
        }
        else
            cur_length = 1;
    }
    cout<<max_length<<endl;
        return 0;
    }