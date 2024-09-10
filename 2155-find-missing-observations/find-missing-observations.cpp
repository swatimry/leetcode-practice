class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
      int m=rolls.size();
      int sum=0;
      for(int i=0;i<m;i++){
        sum+=rolls[i];
      }
      int desired_sum= (mean*(n+m)-sum);  
      vector<int> ans(n);
      if( desired_sum<1*n || desired_sum>6*n){
        return {};
      }
      int avg= desired_sum/n;
      int rem=desired_sum%n;
      for(int i=0;i<n;i++){
              ans[i]=avg;
              if(rem>0){
                ans[i]++;rem--;
              }
      }
      return ans;
       
    }
};