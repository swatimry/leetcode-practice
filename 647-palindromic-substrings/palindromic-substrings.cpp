class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        int count=0;
        for(int i=n;i>=0;i--){
            for(int j=i;j<n;j++){
              if(i==j){
                  dp[i][j]=1;
                  count++;
              }
            else if(j-i+1==2){
                if(s[j]==s[i]){
                    dp[i][j]=1;
                    count++;
                }
               
            }
            else{
                if(s[i]==s[j]){
                    cout<<i<<" "<<j;
                    if(dp[i+1][j-1]){
                        count++;
                        dp[i][j]=1;
                    }
                }
              
            }
            }
        }
        return count;
    }
};