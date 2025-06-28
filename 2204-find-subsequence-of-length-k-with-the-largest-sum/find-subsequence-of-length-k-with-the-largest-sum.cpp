class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n=nums.size();
        vector<pair<int,int>> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back({nums[i],i});
        }
        sort(ans.begin(),ans.end());
        vector<pair<int,int>> temp;
        for(int i=n-1;i>n-k-1;i--){
           temp.push_back(pair{ans[i].second,ans[i].first});
        }
        sort(temp.begin(),temp.end());
        vector<int> final;
        for(int i=0;i<k;i++){
            final.push_back(temp[i].second);
        }
        return final;
   
    }
};