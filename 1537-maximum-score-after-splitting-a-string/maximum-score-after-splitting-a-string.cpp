class Solution {
public:
    int maxScore(string s) {
       vector<int> ones(s.size());
       int n=s.size();
       s[0]=='1'? ones[0]=1 : ones[0]=0;
       for(int i=1;i<n;i++){
         s[i]=='1'? ones[i]=ones[i-1]+1 : ones[i]=ones[i-1];
       }
       int tot_ones=ones[n-1];
       int currzeroes=0;
       int ans=INT_MIN;
       for(int i=0;i<n-1;i++){
        if(s[i]=='0'){
            currzeroes++;
        }
         
         ans=max(currzeroes+ tot_ones- ones[i],ans);
       }
       return ans;
    }
};