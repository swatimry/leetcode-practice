class Solution {
public:
    int minDistance(string word1, string word2) {
       int n=word1.size();
       int m=word2.size();
       int dp[n+1][m+1];
        for(int i=n;i>=0;i--){
            dp[i][m]=word1.size()-i;
        }
         for(int j=m;j>=0;j--){
            dp[n][j]=word2.size()-j;
        }
       for(int i=n-1;i>=0;i--){
           for(int j=m-1;j>=0;j--){
             
                   if(word1[i]==word2[j]){
                       dp[i][j]=dp[i+1][j+1];
                   }
                   else{
                       dp[i][j]=1+min(dp[i+1][j+1]
                       ,min(dp[i][j+1],dp[i+1][j]));
                   }
               
           }
       }  
       return dp[0][0];
    }
};