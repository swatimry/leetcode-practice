class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      int n=nums.size();
      int p,m;
      for(int i=0;i<n;i++){
          if(nums[i]>0){
              p=i;
              break;
          }
      } 
       for(int i=0;i<n;i++){
          if(nums[i]<0){
              m=i;
              break;
          }
      }
    
      vector<int> ans;
      while(p<n && m<n){
          ans.push_back(nums[p++]);
        
          while(p<n &&nums[p]<0 ){
              p++;
              
          }
           ans.push_back(nums[m++]);
         
          while(m<n && nums[m]>0){
              m++;
          }

      }
      return ans;

    }
};