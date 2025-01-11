class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k){
            return false;
        }
        if(s.size()==k){
            return true;
        }
        int odds=0;
        vector<int> chars(26,0);
        for(auto x:s){
            chars[x-'a']++;
        }
        for(auto x:chars){
            if(x%2!=0){
                odds++;
                if(odds>k){
                    return false;
                }
            }
        }
        return true;
    }
};