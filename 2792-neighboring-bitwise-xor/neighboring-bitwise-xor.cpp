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
            if(derived[i]==1){
                ones++;
            }
        }
        if(ones&1){
            return false;
        }
        return true;
    }
};