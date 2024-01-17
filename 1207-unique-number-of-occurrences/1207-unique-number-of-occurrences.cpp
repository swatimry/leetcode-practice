class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int,int> m;
       for(auto i:arr){
           m[i]++;
       }
        for(auto i:m){
            if(arr[i.second]!=1001){
                arr[i.second]=1001;
            }
            else{
                return false;
            }
        
        }
        
        return true;
    }
};