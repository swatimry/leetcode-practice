class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1){
            return 1;
        }
       map<int,int> m;
       for(auto i: trust){
           m[i[1]]++;
       }
       
       for(auto i :m){
           if(i.second==n-1){
               for(auto x:trust){
                   if(x[0]==i.first){
                       return -1;
                   }
               }
              return i.first;
           }
       }
       return -1;
    }
};