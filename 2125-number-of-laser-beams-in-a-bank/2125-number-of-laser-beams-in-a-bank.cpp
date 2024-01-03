class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0;
        int prev=0;int curr=0;
        for(int i=0;i<bank.size();i++){
            curr=0;
            
            for(int j=0;j<bank[i].size();j++){
                
                if(bank[i][j]=='1'){
                    curr++;
                }
            }
            ans+=prev*curr;
            if(curr!=0){
                prev=curr;
            }
            
            
        }
        return ans;
    }
};