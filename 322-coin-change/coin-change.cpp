class Solution {
public:
   
    int coinChange(vector<int>& coins, int amount) {
        
        int dp[coins.size()+1][amount+1];
         for (int i = 0; i <= coins.size(); i++) {
            for (int j = 0; j <= amount; j++) {
                if (j == 0) {
                    dp[i][j] = 0;
                }
                if (i == 0) {
                    dp[i][j] = INT_MAX;  // Set to a large value instead of 0
                }
            }
        }
      
        for(int i=1;i<coins.size()+1;i++){
          for(int j=1;j<amount+1;j++){
             
              if(coins[i-1]<=j){
                  int take=dp[i][j-coins[i-1]];

                  int nottake=dp[i-1][j];
                  if(take!=INT_MAX){
                      dp[i][j]=min(1+take,nottake);
                  }else{

                 dp[i][j]=nottake;
                  }
               
              }else{
                   dp[i][j]=dp[i-1][j];
              }
          }
        }
        return dp[coins.size()][amount] == INT_MAX ? -1:dp[coins.size()][amount];
       
        
    }
};