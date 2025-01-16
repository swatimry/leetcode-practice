class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int ans=0;

        if(n&1){
            for(int i=0;i<m;i++){

            ans^=nums2[i];
            }
        }
        if(m&1){
            for(int i=0;i<n;i++){
                ans^=nums1[i];
            }
        }
        return ans;
    }
};