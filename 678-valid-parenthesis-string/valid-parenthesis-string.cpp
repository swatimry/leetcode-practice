class Solution {
public:
        
    bool help(int i,int op,string s,vector<vector<int>>&dp){
        if(i==s.size()){
            return op==0;
        }
        if(op<0){
            return false;
        }
        if(dp[i][op]!=-1){
            return dp[i][op];
        }
        bool isvalid=false;
        if(s[i]=='*'){
            isvalid|=help(i+1,op+1,s,dp);
            isvalid|=help(i+1,op,s,dp);
            if(op>0){
                isvalid|=help(i+1,op-1,s,dp);
            }
        }
        else{
            if(s[i]=='('){
                isvalid=help(i+1,op+1,s,dp);
            }
            else if(op>0){
                isvalid=help(i+1,op-1,s,dp);
            }
        }
        return dp[i][op]=isvalid;
    }
    bool checkValidString(string s) {
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
       
        
        return help(0,0,s,dp);
    }
};