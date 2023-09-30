class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh=0;
        int n=grid.size();
        int m=grid[0].size();
        
        int vis[n][m];
        queue<pair<int,pair<int,int>>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                  q.push({0,{i,j}});
                }else{
                    vis[i][j]=0;
                }
                if(grid[i][j]==1){
                    fresh++;
                }
                
            }
        }
       
        if(fresh==0){
            return 0;
        }
        int time=0;
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
        while(!q.empty()){
            int r=q.front().second.first;
            int c=q.front().second.second;
            int t=q.front().first;
            time=max(time,t);
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=r+row[i];
                int ncol=c+col[i];
                cout<<nrow<<ncol;
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                    q.push({t+1,{nrow,ncol}});
                    fresh--;
                    vis[nrow][ncol]=2;
                    


                }
            }
            
        }
        if(fresh==0){
            return time;
        }
        return -1;

    }
};