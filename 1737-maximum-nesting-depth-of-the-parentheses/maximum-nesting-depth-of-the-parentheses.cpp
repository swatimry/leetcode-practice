class Solution {
public:
    int maxDepth(string s) {
      stack<char> stk;
      int ans=0;
      for(auto i:s){
        if(i=='('){
            stk.push('(');
            int curr=stk.size();
            ans=max(ans,curr);

        }
        else if(i==')'){
            stk.pop();
        }
      } 
      return ans;  
    }
};