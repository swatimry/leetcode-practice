class Solution {
public:
    int minimumLength(string s) {
        int ans=s.size();
        unordered_map<char,int> m;
        for(auto &x:s){
            m[x]++;
        }
        for(auto x:m){
            if(x.second%2==0){
                int del=x.second-2;
                ans-=del;
            }else{
                int del=x.second-1;
                ans-=del;
            }
        }
        return ans;
    }
};