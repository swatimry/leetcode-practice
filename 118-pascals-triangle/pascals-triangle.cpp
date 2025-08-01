class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        if(n==1){
            return {{1}};
        }else if(n==2){
            return {{1},{1,1}};
        }
        vector<vector<int>> ans;
       ans.push_back({1});
       ans.push_back({1,1});
       vector<int> prev={1,1};
        for(int i=1;i<n-1;i++){
           vector<int> curr;
           curr.push_back(1);
       for(int j=0;j<prev.size()-1;j++){
       
             curr.push_back(prev[j]+prev[j+1]);
       }
       curr.push_back(1);
       ans.push_back(curr);
       prev=curr;
        }
        return ans;
    }
};