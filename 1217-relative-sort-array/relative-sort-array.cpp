class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       map<int,int>m;for(auto i:arr1){
            m[i]++;
        }
        vector<int> ans;
        for(int i=0;i<arr2.size();i++){
             while(m[arr2[i]]--){
                ans.push_back(arr2[i]);
             }
             m.erase(arr2[i]);
        }
       for(auto i:m){
            while(i.second--){
                ans.push_back(i.first);
            }
        }
        return ans;
           
    }
};