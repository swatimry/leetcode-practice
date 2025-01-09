class Solution {
public:
   bool fun(string s,string t){
    if(s.size()<t.size()){
        return false;
    }
    if(s.substr(0,t.size())==t){
        return true;
    }
    return false;
   }
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(auto x:words){
            if(fun(x,pref)){
                ans++;
            }
        }
        return ans;
    }
};