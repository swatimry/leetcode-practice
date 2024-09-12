class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
       set<char> s;
        for(auto i:allowed){
           s.insert(i);
        }
        for(int i=0;i<words.size();i++){
          bool consistent=true;
            for(auto j:words[i]){
                if(s.find(j)==s.end()){
                    consistent=false;
                    break;
                }
            }
            if(consistent){
                ans++;
            }
        }
        return ans;
    }
};