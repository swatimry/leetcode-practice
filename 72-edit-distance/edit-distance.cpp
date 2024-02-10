class Solution {
public:
int help(int i,int j,string word1,string word2,vector<vector<int>> &dp){

    if(i>=word1.size()){
        return word2.size()-j;
    }
    if(j>=word2.size()){
         return word1.size()-i;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(word1[i]==word2[j]){
        return dp[i][j]=help(i+1,j+1,word1,word2,dp);
    }
    
        int ins=1+help(i,j+1,word1,word2,dp);
        int del=1+help(i+1,j,word1,word2,dp);
        int rep=1+help(i+1,j+1,word1,word2,dp);
        return dp[i][j]= min(ins,min(del,rep));
    
}
    int minDistance(string word1, string word2) {
        int i=0,j=0,cnt=0;
        vector<vector<int>> dp(word1.length(), vector<int>(word2.length(), -1));
        
       return help(i,j,word1,word2,dp);
       
    }
};