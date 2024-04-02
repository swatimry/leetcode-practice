class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        map<char,char> m;
        set<int> st;
        for(int i=0;i<n;i++){
          if(m.find(s[i])==m.end() ){
            //key not present
            if(st.find(t[i])==st.end()){

            m[s[i]]=t[i];
            st.insert(t[i]);
            }
            else{
                return false;
            }
          }
          else{
            //key present
            if(m[s[i]]!=t[i]){
                return false;
            }
          }
        }
        return true;
    }
};