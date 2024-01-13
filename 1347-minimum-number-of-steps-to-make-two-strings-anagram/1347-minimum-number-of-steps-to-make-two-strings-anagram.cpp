class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> m;
        map<char,int> n;
        for(auto i:s){
            m[i]++;
        }
          for(auto i:t){
            n[i]++;
        }
        int count=0;
        for(auto i:m){
            if(i.second>n[i.first]){
                count+=i.second-n[i.first];
            }
        }
        return count;
        
    }
};