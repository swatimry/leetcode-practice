class Solution {
public:
    void bfs(vector<bool> &visited,vector<vector<int>>& isConnected,int root,int n){
       queue<int> q;
       q.push(root);
       while(!q.empty()){
         int temp=q.front();
        
         q.pop();
         for(int i=0;i<n;i++){
            
              if(isConnected[temp][i]==1 && visited[i]!=true){
                 
                    visited[i]=true;
                    q.push(i);
                
            }
            
           
         }
    
       }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool> visited(n,false);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                cnt++;
               
                visited[i]=true;
                bfs(visited,isConnected,i,n);
            }
        }
        return cnt;
    }
};