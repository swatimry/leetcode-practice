class Solution {
public:
    int maxDepth(string s) {
     
      int ans=0;
      int cnt=0;
      for(auto i:s){
        if(i=='('){
            
           cnt++;
            ans=max(ans,cnt);

        }
        else if(i==')'){
            cnt--;
        }
      } 
      return ans;  
    }
};