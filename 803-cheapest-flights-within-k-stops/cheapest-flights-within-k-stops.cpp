class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0;i<flights.size();i++){
            adj[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
       queue<pair<int,int>> q;
       vector<int> ans(n,INT_MAX);
       ans[src]=0;
       q.push({src,0});
       int steps=0;
       while(!q.empty() && steps<=k){
        steps++;
        int x=q.size();
        while(x--){
            int node=q.front().first;
         int dis=q.front().second;
         q.pop();
         for(auto i:adj[node]){
            int neighbour=i.first;
            int cost=i.second;
            if(ans[neighbour]>cost+dis){
                ans[neighbour]=cost+dis;
                q.push({neighbour,ans[neighbour]});
            }
         }

        }
         
         
         
                } 
                return ans[dst]==INT_MAX? -1 :ans[dst];  
       
    }
};