class Solution {
public:
int bs(int s,int e,int t,vector<int>&nums){
    int mid=s+(e-s)/2;
    while(s<=e){
        mid=s+(e-s)/2;
        if(nums[mid]==t){
            return mid;
        }
        if(nums[mid]>t){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int k=-1;
        int n=nums.size();
        int s=0;int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
         mid=s+(e-s)/2;
         
         int prev=(mid+n-1)%n;
         int next=(mid+1)%n;
         if(nums[prev]>=nums[mid] && nums[next]>=nums[mid]){
            k= mid;
            
            break;
         }
         if(nums[mid]>=nums[e]){
            s=mid+1;
         }
         else{
            e=mid-1;
         }

        }
        
        int res=bs(0,k-1,target,nums);
        if(res==-1){
            return bs(k,n-1,target,nums);
        }
        return res;
    }
};