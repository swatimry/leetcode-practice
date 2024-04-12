class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left_max(n);
        vector<int> right_max(n);
        
        int currmax=-1;
        for(int i=0;i<n;i++){
           if(currmax<height[i]){
             left_max[i]=-1;
            currmax=height[i];
           }else{

            left_max[i]=currmax;
           }
        }
        
        currmax=-1;
        for(int i=n-1;i>=0;i--){
            if(currmax<height[i]){
                 right_max[i]=-1;
            currmax=height[i];
           }else{

            right_max[i]=currmax;
           }
        }
        int ans=0;
        for(int i=1;i<n-1;i++){
            if(left_max[i]!=-1 && right_max[i]!=-1){

            ans+= min(left_max[i],right_max[i])-height[i];
            }
        }
        return ans;
    }
};