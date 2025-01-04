class Solution {
public:
    int countPalindromicSubsequence(string s) {
        set<char> characters;
        int ans=0;
        for(auto x:s){
            characters.insert(x);
        }
        int n=s.size();
        for(auto x:characters){
            int i=0;int j=n-1;
            while(i<n && s[i]!=x){
                i++;

            }
            while(j>=0 && s[j]!=x){
                j--;
            }
            if(i==j || i>j) continue;
            set<char> temp;
            for(int k=i+1;k<j;k++){
                temp.insert(s[k]);
            }
            ans+=temp.size();
        }
        return ans;

    }
};