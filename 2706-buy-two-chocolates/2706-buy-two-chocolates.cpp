class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
       sort(prices.begin(),prices.end());
       if(prices[0]>money){
           return money;
       }
        int i=0;
        while(i+1<prices.size()){
            if(prices[i]+prices[i+1]<=money){
                return money-(prices[i]+prices[i+1]);
            }
            i++;
        }
        return money;
    }
};