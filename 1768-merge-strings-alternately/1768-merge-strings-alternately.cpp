class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int i=0;int j=0;string ans="";
        int n=word1.size();
        int m=word2.size();
        while(i<n && j<m){
            ans+=word1[i++];
            ans+=word2[j++];
        }
        cout<<ans;
        while(i<n){
            ans+=word1[i++];
        }
        while(j<m){
            ans+=word2[j++];
        }
        return ans;
        
    }
};