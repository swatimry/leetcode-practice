class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long n=nums.size();
        long long ans=0;
        
           long long mid=n/2;

            
            if(nums[mid]==k){
                return 0;
            }
            ans+=abs(nums[mid]-k);
            
            long long i=mid-1;
            while(i>=0 && nums[i]>k){
                ans+=nums[i]-k;
                i--;
            }
            i=mid+1;
            while(i<n && nums[i]<k ){
                ans+=k-nums[i];
                i++;
            }
            return ans;
            
        

    }
};