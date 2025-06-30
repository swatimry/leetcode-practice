class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        if(n==1){
            return 0;
        }
        //if(nums[1]-nums[0]<=0){return 0;}
        int i=0;int j=0;
        sort(nums.begin(),nums.end());

        while(j<n &&  i<=j){
            if(nums[j]-nums[i]==1){
                ans=max(j-i+1,ans);
                j++;
            }else if(nums[j]-nums[i]>0){
                while(i<=j  && nums[j]-nums[i]>1){
                  i++;
                  
                }
            }else if(nums[j]-nums[i]<=0){
               
                j++;
            }
        }
        cout<<i<<" "<<j;
        return ans;
    }
};