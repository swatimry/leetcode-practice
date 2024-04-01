class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1){
            return 0;
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        int n=nums.size();
        if(nums[n-2]<nums[n-1]){
            return n-1;
        }
        int s=1;int e=nums.size()-2;
        int mid=s+(e-s)/2;
        while(s<=e){
            mid=s+(e-s)/2;
           
                if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                    return mid;
                }
                else if(nums[mid-1]>nums[mid]){
                 e=mid-1;
            }
            else {
                s=mid+1;
            }
                
                
            
            
            
        }
        return -1;
    }
};