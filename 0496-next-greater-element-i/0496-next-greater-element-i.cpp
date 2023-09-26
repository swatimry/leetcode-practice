class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        int n=nums2.size();
        s.push(nums2[n-1]);
        vector<int> ans;
        ans.push_back(-1);
        for(int j=n-2;j>=0;j--){
            int i=nums2[j];
            if(i<s.top()){
                ans.push_back(s.top());
                s.push(i);
            }
            else{
                while(!s.empty() && s.top()<=i){
                    s.pop();
                }
                if(s.empty()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(s.top());
                }
                s.push(i);
            }
        }
        reverse(ans.begin(),ans.end());
        vector<int> res;
        for(auto i:nums1){
           for(int  j=0;j<nums2.size();j++){

               if(i==nums2[j]){
                   res.push_back(ans[j]);
               }
           }
        }
        return res;
    }
};