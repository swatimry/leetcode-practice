class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int,double>>> adj(n);
         for (int i = 0; i < edges.size(); ++i) {
            int u = edges[i][0];
            int v = edges[i][1];
            double prob = succProb[i];
            adj[u].push_back({v, prob});
            adj[v].push_back({u, prob});
        }
       
        vector<double> prob(n,0.000);
        
        prob[start_node]=1.0;
       priority_queue<pair<double,int>> st;
        st.push({1.0,start_node});
        while(!st.empty()){
            
           auto  temp=st.top();
            st.pop();
            int node=temp.second;
            double prob_n=temp.first;
            for(auto i:adj[node]){
                int child=i.first;
                double probinbetween=i.second;
                if(prob[child]<prob_n*probinbetween){
                    prob[child]=prob_n*probinbetween;
                    st.push({prob[child],child});
                }
            }
        }
        return prob[end_node];
    }
};