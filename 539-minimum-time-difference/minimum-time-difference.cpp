class Solution {
public:
   int convert(string time){
      int min=0;
      min=stoi(time.substr(0,2))*60+stoi(time.substr(3,2));
      return min;
   }
    int findMinDifference(vector<string>& timePoints) {
        sort(timePoints.begin(),timePoints.end());
        timePoints.push_back(timePoints[0]);
        int n=timePoints.size(); 
        int ans=INT_MAX;
        for(int i=0;i<n-1;i++){
           int currmin=convert(timePoints[i]);
           int nextmin=convert(timePoints[i+1]);
           ans=min(ans,abs(currmin-nextmin));
           ans=min(ans,abs(currmin-(1440+nextmin)));
        }
        return ans;
    }
};