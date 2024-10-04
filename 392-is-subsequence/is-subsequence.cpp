class Solution {
public:
    bool help(int i,int j,string s,string t){
        if(i>=s.size()){
            return true;
        }
        if(j>=t.size()){
            return false;
        }
        if(s[i]==t[j]){
            return help(i+1,j+1,s,t);
        }
        return help(i,j+1,s,t);

    }
    bool isSubsequence(string s, string t) {
        return help(0,0,s,t);
    }
};