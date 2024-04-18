class Solution {
public:
int help(int i,int j,vector<vector<int>>& grid,int n,int m){
   if(i<0 || i>n-1 ||j<0 || j>m-1 ){
    return 1;
   }
   if(grid[i][j]==0){
    return 1;
   }
   if(grid[i][j]==-1){
    return 0;
   }

   grid[i][j]=-1;
   int ans= help(i,j+1,grid,n,m)+help(i,j-1,grid,n,m)+help(i-1,j,grid,n,m)+help(i+1,j,grid,n,m);

   return ans;
}
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){

                  ans=help(i,j,grid,n,m);
                 break;
                }
            }
        }
        return ans;
    }
};