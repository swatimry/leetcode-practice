class Solution {
public:
    int appendCharacters(string s, string t) {
        int sl=0,tl=0;
        
        while(sl<s.length() && tl<t.length()){
            if(s[sl]==t[tl]){
               tl++;
            }
            sl++;
        }
        cout<<tl;
        return t.length()-tl;
    }
};