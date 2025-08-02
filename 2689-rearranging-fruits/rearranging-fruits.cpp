class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int> freq;
        int minele=basket1[0];
        for(auto x:basket1){
             freq[x]++;
             minele=min(x,minele);
        }
         for(auto x:basket2){
             freq[x]--;
             minele=min(x,minele);
        }
        
        vector<int> extra;
        for(auto x:freq){
            if(x.second==0){
                continue;
            }
            if(x.second%2!=0){
                return -1;
            }else{
             int times=abs(x.second);
            for(int i=0;i<times/2;i++){
                extra.push_back(x.first);
            }
            }
        }
       long long cost=0;
        
        sort(extra.begin(),extra.end());

            for(int i=0;i<extra.size()/2;i++){
                cost+=min(minele*2,extra[i]);
            }
            return cost;
    }
};