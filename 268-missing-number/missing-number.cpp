class Solution {
public:
    int missingNumber(vector<int>& nums) {
          int sum=0;
        int exp=0;
        for(int i=1;i<=nums.size();i++){
              sum+=nums[i-1];
              exp+=i;
        }
        return exp-sum;
    }
};