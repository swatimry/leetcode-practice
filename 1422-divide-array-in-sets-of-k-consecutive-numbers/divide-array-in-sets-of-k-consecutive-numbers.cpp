class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
       if(nums.size()%k!=0){
        return false;
       }   
       map<int,int> mp;
       for(auto i:nums){
        mp[i]++;
       }
       for(auto [h,frq]: mp){
          if(frq==0){continue;}
          while(frq--){
            for(int i=h;i<h+k;i++){
            if(mp[i]==0){
                return false;
            }
            mp[i]--;
          }
          }
          
       }
       return true;
    }
};