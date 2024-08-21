class Solution {
public:
    void dfs(int curr,vector<bool> &visited, unordered_map<int,vector<int> > &adj){
        visited[curr]=true;
        for(auto i:adj[curr]){
            if(!visited[i]){
                dfs(i,visited,adj);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1){
            return -1;
        }
        unordered_map<int,vector<int> > adj;
        for(int i=0;i<connections.size();i++){
             adj[connections[i][0]].push_back(connections[i][1]);
             adj[connections[i][1]].push_back(connections[i][0]);
        }
        vector<bool> visited(n,false);
        int components=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                components++;
               dfs(i,visited,adj);
            }
        }
        
        return components-1;


    }
};