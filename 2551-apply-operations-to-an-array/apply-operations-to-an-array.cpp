class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        for(int i=0;i<ans.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                ans[s++]=nums[i];
            }
        }
        return ans;
    }
};