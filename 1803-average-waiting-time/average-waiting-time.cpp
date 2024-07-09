class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double time=customers[0][0];int n=customers.size();double wt=0;
        for(int i=0;i<n;i++){
            if(time<customers[i][0]){
                time+=(customers[i][0]-time);
            }
            time+=customers[i][1];
            wt+=(time-customers[i][0]);
            cout<<time<<" "<<wt<<endl;
        }
         return wt/n;
    }
};