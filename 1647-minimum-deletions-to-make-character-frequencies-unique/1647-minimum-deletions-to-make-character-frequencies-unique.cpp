class Solution {
public:
    int minDeletions(string s) {
        vector<int> aplha(26,0);
        for(char j:s){
            aplha[j-'a']++;
        }
        sort(aplha.begin(),aplha.end(),greater<int>());
        int f=aplha[0];
        int ans=0;
        for(auto i:aplha){
            if(i>f){
                if(f>0){
                  ans+=i-f;
                }
                else{
                    ans+=i;
                }
            }
            f=min(f-1,i-1);
        }
        return ans;
    }
};