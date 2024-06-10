class Solution {
public:
    int heightChecker(vector<int>& heights) {
          vector<int> temp=heights;
          int cnt=0;
          sort(heights.begin(),heights.end());
          for(int i=0;i<heights.size();i++){
            if(heights[i]!=temp[i]){
                cnt++;

            }
          }
          return cnt;
    }
};