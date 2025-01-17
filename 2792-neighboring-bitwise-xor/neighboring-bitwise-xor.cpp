class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n=derived.size();
        if(n==1 && derived[0]==0){
            return true;
        }else if(n==1 && derived[0]==1){
              return false;
        }
        int ones=0;
        for(int i=0;i<n;i++){
            ones^=derived[i];
        }
        if(ones==0){
            return true;
        }
        return false;
    }
};