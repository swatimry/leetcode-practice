class Solution {
public:
    int climbStairs(int n) {
      if(n==1){
          return 1;
      }   
        else if(n==2){
            return 2;
        }
        int dp[n];
        for(int i=0;i<n;i++){
            if(i==0){
                dp[i]=1;
            }
            else if(i==1){
                dp[i]=2;
            }
            else{
                dp[i]=dp[i-1]+dp[i-2];
            }
            
        }
        return dp[n-1];
    }
};