class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones=0;
        int zeroes=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                zeroes++;
            }
            else{
                ones++;
            }
        }
        string ans="";
        while(ones>1){
            ans.push_back('1');
            ones--;
        }
        while(zeroes>0){
            ans.push_back('0');
            zeroes--;
        }
        ans.push_back('1');
        return ans;
    }
};