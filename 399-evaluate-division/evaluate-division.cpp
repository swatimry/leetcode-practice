class Solution {
public:
double bfs(map<string,vector<pair<string,double>>>adj , string a,string b){
    if(a==b){
        return 1;
    }
  queue<pair<string,double>> q;
   set<string> s;
   s.insert(a);
  q.push({a,1.0});
  while(!q.empty()){
    auto temp=q.front();
    q.pop();
    string node=temp.first;
    double cost=temp.second;
    for(auto i:adj[node]){
        if(i.first==b){
            return i.second*cost;
        }
        else{
            if(s.find(i.first)==s.end()){

            q.push({i.first,i.second*cost});
            s.insert(i.first);
            }
        }
    }
  }
  return -1;

}
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
      map<string,vector<pair<string,double>>>adj;
      int n=equations.size();
     for(int i=0;i<n;i++){
        adj[equations[i][0]].push_back({equations[i][1],values[i]});
        adj[equations[i][1]].push_back({equations[i][0],1.0/values[i]});
     }

     vector<double> ans;
     for(auto j:queries){
        cout<<"here";
        if(adj.find(j[0])==adj.end() || adj.find(j[1])==adj.end()){
            ans.push_back(-1);
        }
        else{
            ans.push_back(bfs(adj,j[0],j[1]));
        }
     }
     return ans;
    }
};