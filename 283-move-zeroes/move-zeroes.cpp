class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ci=0;int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[ci++]=nums[i];
                
            }
            else{
                count++;
            }
        }
        while(ci<nums.size()){
            nums[ci++]=0;
        }
    }
};