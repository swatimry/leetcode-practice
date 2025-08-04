class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> m;
        int ans=0;
        int i=0;int j=0;
      
        while(j<fruits.size()){
           m[fruits[j]]++;
           while(m.size()>2){
              m[fruits[i]]--;
              if(m[fruits[i]]==0){
                m.erase(fruits[i]);
              }
              i++;
           }
           ans=max(ans,(j-i+1));
           j++;
        }
        return ans;
    }
};