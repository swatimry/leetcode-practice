class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ans;
       int dp[numRows+1][numRows+1]; 
       
       for(int i=0;i<numRows;i++){
           for(int j=0;j<=i;j++){
               if(j==0 || i==j){
                   dp[i][j]=1;
               }
               else {
                   dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
               }

           }
       }
        for(int i=0;i<numRows;i++){
            vector<int> temp;
           for(int j=0;j<=i;j++){
              temp.push_back(dp[i][j]);

           }
           ans.push_back(temp);
       }
       return ans;


    }
};