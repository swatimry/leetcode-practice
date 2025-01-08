class Solution {
public:
    bool isPrefixAndSuffix(string s1, string s2){
        int n= s1.length();
        int m= s2.length();
        if(m<n){
            return false;
        }
        //cout<<s2.substr(0,n)<<" "<<s2.substr(m-n,n)<<endl;
         if (s2.substr(0,n) == s1){
           if(s2.substr(m-n,n)== s1){
            return true;
           }
         }
         return false;

    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(isPrefixAndSuffix(words[i],words[j])) ans++;
            }
        }
        return ans;
    }
};