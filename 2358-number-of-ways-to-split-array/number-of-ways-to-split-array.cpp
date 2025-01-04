class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
      long int ans=0;
      vector<long int> suffix_sum(nums.size()-1);
      suffix_sum[nums.size()-2]=nums[nums.size()-1];
      for(long int  i=nums.size()-2;i>0;i--){
        suffix_sum[i-1]=nums[i]+suffix_sum[i];
      } 
      long int curr=0;  
      for(long int i=0;i<nums.size()-1;i++){
         curr+=nums[i];
         if(curr>=suffix_sum[i]){
            ans++;
         }
      }
      return ans;
    }
};