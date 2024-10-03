class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        bool ans=false;
        int left=INT_MAX;
        int mid=INT_MAX;

        for(auto x:nums){
            if(x<left){
                left=x;
            }
            if(x>left && x<mid){
                mid=x;
            }
            if(x>left && x>mid){
                return true;
            }
        }
        return ans;
    }
};