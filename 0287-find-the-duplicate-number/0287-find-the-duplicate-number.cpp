class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> rec(nums.size());
        int ans;
        for(int i=0;i<nums.size();i++){
            int recidx=nums[i]-1;
             if(rec[recidx]==1){
                 ans= nums[i];
             }
             else{
                 rec[recidx]++;
             }
        }
        return ans;
    }
};