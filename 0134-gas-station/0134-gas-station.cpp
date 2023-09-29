class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
      int total=0;
      int n=gas.size();
      int start=0;
      int diff=0;
      int fuel=0;
      for(int i=0;i<n;i++) {
          diff=gas[i]-cost[i];
          total+=diff;
          fuel+=diff;
          if(fuel<0){
              start=i+1;
              fuel=0;
          }
      }  
      return (total<0)?-1:start;
    }
};