class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(auto i:s){
            m[i]++;
        }
        int cnt=0;
        int maxodd=0;
     
        for(auto i:m){
            cout<<cnt<<" "<<i.first<<" "<<i.second<<endl;
            if(i.second%2==0){
                cnt+=i.second;
                
            }
             if(i.second%2!=0){
                cnt+=(i.second-1);
                maxodd=max(maxodd,i.second);
            }
            
        }
        if(maxodd!=0){
                cnt+=1;
            }
        return cnt;
    }
};