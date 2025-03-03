class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> sm;
        vector<int> lg;
        int cnt=0;
        for(auto x:nums){
            if(x<pivot){
                sm.push_back(x);
            }
            else if(x==pivot) cnt++;
            else{
                lg.push_back(x);
            }
        }
       int i=0;
        for(auto x:sm){
           nums[i++]=x;
        }
        while(cnt>0){
           nums[i++]=pivot;
           cnt--;
        }
        for(auto x:lg){
             nums[i++]=x;
        }
        return nums;
    }
};