class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=INT_MIN;
        for(int i=0;i<candies.size();i++){
            maxi=max(maxi,candies[i]);
        }
        int n=candies.size();
      
        vector<bool> result(n);
         for(int i=0;i<n;i++){
            result[i]=candies[i]+extraCandies>=maxi ? true :false;
        }
        return result;

    }
};