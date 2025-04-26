class Solution {
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        int n=nums.size();
        long long ans=0;
        unordered_map<int,int> freq;
        freq[0]=1;
        int pref=0;
        for(auto i:nums){
          if(i%modulo==k){
            pref+=1;
          }
          int r1= pref%modulo;
          int r2=(r1-k+modulo)%modulo;
          ans+=freq[r2];
          freq[r1]++;
        } 
        return ans;
    }
};