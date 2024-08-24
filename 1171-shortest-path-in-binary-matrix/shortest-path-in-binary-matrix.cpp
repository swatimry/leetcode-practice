typedef pair<int,pair<int,int>> pi;
class Solution {
public:
  int dx[8]={0,1,-1,0,1,-1,-1,1};
    int dy[8]={1,0,0,-1,1,-1,1,-1};
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1){
            return -1;
        }
        vector<vector<int>> result(n,vector<int> (n,1e9));
        result[0][0]=0;
        priority_queue<pi,vector<pi>,greater<pi>> pq;
        pq.push({0,{0,0}});
        while(!pq.empty()){
            int dis=pq.top().first;
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            pq.pop();
            for(int i=0;i<8;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx>=0 && ny>=0 && nx<n && ny<n && grid[nx][ny]!=1){
                    if(result[nx][ny]>1+dis){
                        result[nx][ny]=1+dis;
                        pq.push({result[nx][ny],{nx,ny}});
                    }
                }
            }

        }
        if(result[n-1][n-1]==1e9){
            return -1;
        }
        return result[n-1][n-1]+1;


    }
};