class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> temp;
        for(auto i:nums){
            temp[i]++;
        }
         
        int count=nums.size();
        vector<vector<int>> ans;
        while(count>0){
            vector<int> tempans;
            for(auto i:temp){
                
                if(i.second!=0){
                    temp[i.first]--;
                    tempans.push_back(i.first);
                    count--;
                }
            }
            ans.push_back(tempans);
        }
        return ans;
    }
};