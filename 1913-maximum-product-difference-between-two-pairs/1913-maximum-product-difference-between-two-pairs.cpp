class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int fmax=INT_MIN;
        int smax=INT_MIN;
        int fmin=INT_MAX;
        int smin=INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=fmax){
                smax=fmax;
                fmax=nums[i];
                
            }else if(nums[i]<fmax && nums[i]>smax){
                smax=nums[i];
            }
            if(nums[i]<=fmin){
                smin=fmin;
                fmin=nums[i];
            }
            else if(nums[i]>fmin && nums[i]<smin){
                smin=nums[i];
            }
        }
        cout<<fmax<<endl<<smax<<endl<<fmin<<endl<<smin;
        if(smax==INT_MIN){
            smax=fmax;
        }
         if(smin==INT_MAX){
            smin=fmin;
        }
        int ans=(fmax*smax)-(fmin*smin);
        return ans;
    }
};