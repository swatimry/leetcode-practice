class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int count =0;
        int n=grid.size();
        if(grid[0][0]==1){
            return -1;
        }
        queue<pair<int,int>> q;
        q.push({0,0});
        vector<int> rows={-1,-1,0,+1,+1,+1,0,-1};
         vector<int> cols={0,1,1,1,0,-1,-1,-1};
        while(!q.empty()){
               count++;
            int nodes=q.size();
            while(nodes--){
           pair <int,int> temp=q.front(); q.pop();
           
           if(temp.first==n-1 && temp.second==n-1){
            return count;
           }
           for(int i=0;i<8;i++){
            int r=temp.first+rows[i];
            int c=temp.second+cols[i];
            if(r>=0 && c>=0 && r<n && c<n  && grid[r][c]!=1){
               
                q.push({r,c});
                grid[r][c]=1;


            }
           }
            }
          


        }
        return -1;
    }
};