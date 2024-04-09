class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int res=0;
        int tot=tickets[k];
        for(int i=0;i<tickets.size();i++){
            if(i==k){
              res+=tot;
            }
            else if(i<k){
                if(tickets[i]<=tot){
                    res+=tickets[i];
                }else{
                    res+=tot;
                }
            }
            else if(i>k){
                if(tickets[i]<tot){
                    res+=tickets[i];
                }
                else{
                    res+=(tot-1);
                }
            }
        }
        return res;
    }
};