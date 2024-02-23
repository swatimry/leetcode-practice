class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
      vector<int> trust_to(n+1,0);
      vector<int> trusted_by(n+1,0);   
      for(auto i: trust){
          trust_to[i[0]]++;
          trusted_by[i[1]]++;
      }
      int ans=-1;
      for(int i=1;i<=n;i++){
          if(trust_to[i]==0 && trusted_by[i]==n-1){
              ans=i;
          }
      }
      return ans;
    }
};