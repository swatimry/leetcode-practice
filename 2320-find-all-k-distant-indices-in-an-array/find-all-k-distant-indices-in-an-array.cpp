class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> m;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                for(int j=i-k;j<i+k+1;j++){
                    if(j>=0 && j<nums.size()){
                      m.insert(j);
                    }
                }
            }
        }
vector<int> ans;
        for(auto x:m){
            ans.push_back(x);
        }

        return ans;
    }
};