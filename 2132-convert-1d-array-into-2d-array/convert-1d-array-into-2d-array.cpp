class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans(m,vector<int> (n));
        if(m*n!=original.size()){
          return {};
        }

        int i=0;
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                ans[j][k]=original[i++];
            }
        }
        return ans;
    }
};