class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int cnt=0;
       while(numBottles>=numExchange){
         int maxdrink= numBottles-(numBottles%numExchange);
        
         cnt+=maxdrink;
         numBottles-=maxdrink;
         int exc=maxdrink/numExchange;
         numBottles+=exc;
       }   
   cnt+=numBottles;
   return cnt;
    }
};