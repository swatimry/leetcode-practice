class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans=1;
        int asc=1,dsc=1;
        for(int i=1;i<nums.size();i++){
          if(nums[i-1]<nums[i]){
            asc++;
          }else{
            asc=1;
          }
           if(nums[i-1]>nums[i]){
            dsc++;
          }else{
            dsc=1;
          }
          ans=max(ans,max(asc,dsc));
        }
        return ans;
    }
};