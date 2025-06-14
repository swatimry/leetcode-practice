class Solution {
public:
int findmindigit(int num){
    string nums=to_string(num);
    string temp="";
    for(int i=0;i<nums.size();i++){
        if(nums[i]!='0' && temp==""){
             temp=nums[i];
             nums[i]='0';
        }else if( nums[i]!='0' && nums[i]==temp[0]){
             nums[i]='0';
        }
    }
   int ans=stoi(nums);
   return ans;
}
int findmaxdigit(int num){
    string nums=to_string(num);
    string temp="";
    for(int i=0;i<nums.size();i++){
        if(nums[i]!='9' && temp==""){
             temp=nums[i];
             nums[i]='9';
        }else if( nums[i]!='9' && nums[i]==temp[0]){
             nums[i]='9';
        }
    }
   int ans=stoi(nums);
   return ans;
}
    int minMaxDifference(int num) {
        int maxdigit=findmaxdigit(num);
        int mindigit=findmindigit(num);
        cout<<maxdigit<<" "<<mindigit;
        return abs(maxdigit-mindigit);
    }
};