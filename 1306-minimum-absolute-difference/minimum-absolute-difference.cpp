class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
     sort(arr.begin(),arr.end());
     int diff=INT_MAX;
     int n=arr.size();
     for(int i=0;i<=n-2;i++){
          diff=min(diff,arr[i+1]-arr[i]);
     }   
     cout<<diff;
     vector<vector<int>> ans;
     for(int i=0;i<=n-2;i++){
         if(arr[i+1]-arr[i]==diff){
            vector<int> temp;
            temp.push_back(arr[i]);
            temp.push_back(arr[i+1]);
            ans.push_back(temp);
         }
     }
     return ans;  
    }
};