class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
      map<int,int> mp;
      mp[0]=-1;
      int sum=0;
      int idx=0;
      for(auto i:nums){
        sum+=i;
        if(mp.find(sum%k)!=mp.end()){
              if(abs(mp[sum%k]-idx)>1){
                return true;
              }
        }else{
            mp[sum%k]=idx;
        }
        idx++;
      }   
      return false;
    }
};