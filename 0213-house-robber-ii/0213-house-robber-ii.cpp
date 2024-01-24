class Solution {
public:
    int help(vector<int>&nums){
        int n=nums.size();
       
          if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        int dp[n];
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int j=2;j<n;j++){
          dp[j]=max(nums[j]+dp[j-2],dp[j-1]);
        }
        return dp[n-1];
    };
    int rob(vector<int>& nums) {
        int n=nums.size();
        
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        vector<int> nums1(n-1);
        vector<int> nums2(n-1);
        for(int i=0;i<n;i++){
            if(i!=0){
                nums2.push_back(nums[i]);
            }
            if(i!=n-1){
                nums1.push_back(nums[i]);
            }
            
        }
        int lmax=help(nums1);
        int rmax=help(nums2);
        return max(lmax,rmax);
    }
};