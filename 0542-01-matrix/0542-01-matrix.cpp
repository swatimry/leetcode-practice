class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();int m=mat[0].size();
      
        vector<vector<int>> ans(n,vector<int>(m,-1));;
       
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    ans[i][j]=0;
                   
                }
            }
        }
     
       
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
           
            q.pop();
            
            for(int i=0;i<4;i++){
                
                int nrow=r+row[i];
                int ncol=c+col[i];
              
                
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && ans[nrow][ncol]==-1){
                    ans[nrow][ncol]=ans[r][c]+1;
                    q.push({nrow,ncol});
                   
                }
            }
        }
        return ans;
    }
};