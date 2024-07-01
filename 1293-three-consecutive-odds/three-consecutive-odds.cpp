class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cnt=0;
        int i=0,j=0;
        while(j<arr.size()){
            if(arr[j]%2!=0){
                cnt++;
            }
            else if(arr[j]%2!=0){
                cnt=0;
            }
            if(j-i+1==3){
                if(cnt==3){
                    return true;
                }
                if(arr[i]%2!=0){
                    cnt--;
                }
                i++;
            }
            j++;
        }
        return false;
    }
};