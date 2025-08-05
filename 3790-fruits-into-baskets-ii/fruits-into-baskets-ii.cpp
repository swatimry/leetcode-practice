class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int i=0;int j=0;
        int n=fruits.size();
        int fruits_picked=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(fruits[i]<=baskets[j]){
                fruits_picked++;
                baskets[j]=-1;
                break;
            }
        }
      }
        return n-fruits_picked;
    }
};