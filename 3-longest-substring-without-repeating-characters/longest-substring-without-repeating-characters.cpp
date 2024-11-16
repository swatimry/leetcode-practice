class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int st=0;int i=0;
        int n=s.size();
        set<char> m;
        while(i<n){
          if(m.find(s[i])!=m.end()){
              while(m.find(s[i])!=m.end() && st<i){
               
                m.erase(s[st]);
               
                st++;
              }
             cout<<st;
             m.insert(s[i]);
              i++;
          }
          else{
           m.insert(s[i]);
            
            ans=max(ans,(i-st+1));
             i++;
           
          }

        }
        return ans;
    }
};