typedef pair<int,pair<int,int>> pi;
class Solution {
public:
int dx[4]={0,1,-1,0};
    int dy[4]={1,0,0,-1};
    int minimumEffortPath(vector<vector<int>>& heights) {
        int r=heights.size();
        int c=heights[0].size();
        vector<vector<int>> ans(r,vector<int> (c,1e9));
         vector<vector<bool>>visited(r,vector<bool> (c,false));
        ans[0][0]=0;
        priority_queue<pi,vector<pi>,greater<pi>> pq;
        pq.push({0,{0,0}});
        while(!pq.empty()){
            int effort=pq.top().first;
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            pq.pop();
            visited[x][y]=true;
            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];
                if(nx>=0 && ny>=0 && nx<r && ny<c && visited[nx][ny]!=1){
                    int effortinthis=max(effort,abs(heights[x][y]-heights[nx][ny]));
                    if(effortinthis<ans[nx][ny]){
                        ans[nx][ny]=effortinthis;
                        pq.push({ans[nx][ny],{nx,ny}});
                    }
                }
            }


        }
        return ans[r-1][c-1];




    }
};