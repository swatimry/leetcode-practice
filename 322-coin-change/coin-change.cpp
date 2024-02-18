class Solution {
public:
    int dp[10001][2^31];
    int help(vector<int>& coins, int amount,int i){
        if(amount==0){
            return 0;
        }
        if(i<0 || amount<0){
            return INT_MAX;
        }
        if(dp[amount][i]!=-1){
            return dp[amount][i];
        }
       int take=help(coins,amount-coins[i],i);
       int nottake=help(coins,amount,i-1);
     if(take!=INT_MAX){
         return  dp[amount][i]=min(1+take,nottake);
     }
     else{
         return dp[amount][i]=nottake;
     }

    }
    int coinChange(vector<int>& coins, int amount) {
        int i=coins.size()-1;
        memset(dp,-1,sizeof(dp));
        int res= help(coins,amount,i);
        return (res==INT_MAX) ? -1 :res;
    }
};