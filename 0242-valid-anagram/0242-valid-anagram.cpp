class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> temp;
        for(auto i:s){
            temp[i]++;
        }
        for(auto i:t){
            temp[i]--;
        }
        for(auto i:temp){
            if(i.second!=0){
                return false;
            }
        }
        return true;
    }
};