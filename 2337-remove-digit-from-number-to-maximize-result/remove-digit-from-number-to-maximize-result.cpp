class Solution {
public:
    string removeDigit(string number, char digit) {
        int n=number.size();
        string ans="";
        for(int i=0;i<number.size();i++){

            if(number[i]==digit){
                string temp=number.substr(0,i)+number.substr(i+1,n-i);
                ans=max(ans,temp);
            }
        }
        return ans;
    }
};