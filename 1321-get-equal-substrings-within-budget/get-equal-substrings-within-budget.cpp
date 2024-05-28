class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
      int ans=0;
      int curr_cost=0,curr_len=0;
      int start=0;
      for(int i=0;i<s.length();i++){
        curr_cost+=abs(s[i]-t[i]);
        if(curr_cost>maxCost){
            curr_cost -= abs(s[start] - t[start]);
            ++start;
        } 
        ans=max(ans,i-start+1);
       
      }   
      return ans;
    }
};