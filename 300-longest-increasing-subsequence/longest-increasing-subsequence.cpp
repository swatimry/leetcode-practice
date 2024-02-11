class Solution {
public:
int dp[2501][2501];
    int help(int i,int currlastidx,vector<int> &nums){
        if(i==nums.size()){
            return 0;
        }
        if(dp[i][currlastidx+1]!=-1){
            return dp[i][currlastidx+1];
        }
        int take=0;
        if(currlastidx==-1 || nums[i]>nums[currlastidx]){
           take=1+help(i+1,i,nums);
        }
        
            int nottake= help(i+1,currlastidx,nums);
            return dp[i][currlastidx+1]=max(take,nottake);
        
    }
    int lengthOfLIS(vector<int>& nums) {
       
        
        memset(dp,-1,sizeof(dp));
       return help(0,-1,nums);
        
    }
};