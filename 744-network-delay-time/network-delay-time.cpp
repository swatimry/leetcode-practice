class Solution {
public:
   int djikstra(int src,int n, vector<vector<pair<int,int>>> &adj){
        vector<int>  ans(n+1);
        for(int i=1;i<n+1;i++){
            ans[i]=INT_MAX;
        }
        ans[src]=0;
        set<pair<int,int>> s;
        s.insert({src,0});
        while(!s.empty()){
            pair<int,int> temp=*s.begin();
            s.erase(s.begin());
            cout<<temp.first;
            int node=temp.first;
            int dis=temp.second;
            for(auto j:adj[node]){
                int childnode=j.first;
                int childdis=j.second;
                if(ans[childnode]> dis+childdis){
                    ans[childnode]=dis+childdis;
                    s.insert({childnode,ans[childnode]});
                }
            }

        }
        int result=0;
        for(int i=1;i<=n;i++){
            if(ans[i]==INT_MAX){
                return -1;
            }
            result=max(result,ans[i]);
        }
        return result;


      
   }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(auto i:times){
            adj[i[0]].push_back({i[1],i[2]});
        }
        return djikstra(k,n,adj);


    }
};