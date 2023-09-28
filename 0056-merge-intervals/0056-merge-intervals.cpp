class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       if(intervals.size()==1){
           return intervals;
       }
       sort(intervals.begin(),intervals.end());
        stack<vector<int>> s;
        s.push(intervals[0]);
        for(int i=1;i<intervals.size();i++){
           if(s.top()[1]>=intervals[i][0] && s.top()[1]<=intervals[i][1]){
               vector<int> temp=s.top();
               s.pop();
               temp[1]=intervals[i][1];
               s.push(temp);
           }
           else if(s.top()[1]>=intervals[i][0] && s.top()[1]>=intervals[i][1]){
               continue;
           }
           else{
               s.push(intervals[i]);
           }
        }
        vector<vector<int>> ans;

        while(!s.empty()){
             vector<int> temp=s.top();
             s.pop();
              ans.push_back(temp);

        }
        return ans;
        
    }
};