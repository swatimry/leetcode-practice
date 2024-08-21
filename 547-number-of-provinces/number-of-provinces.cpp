class Solution {
public:
void dfs(vector<vector<int>>& isConnected,int curr,vector<bool> &visited){
   
    visited[curr]=true;
    for (int i = 0; i < isConnected[curr].size(); i++) {
            if (isConnected[curr][i] == 1 && !visited[i]) {
                dfs(isConnected, i, visited);
            }
        }
       
}
    int findCircleNum(vector<vector<int>>& isConnected) {
      int ans=0;
      int n=isConnected[0].size();
      vector<bool> visited(n);
      for(int i=0;i<n;i++){
        
            if( !visited[i]){
               ans++;
                dfs(isConnected,i,visited);
            }
        
      }   
      return ans;
    }
};