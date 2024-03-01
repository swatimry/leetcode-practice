class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ones="";
        string zeroes="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                zeroes.push_back('0');
            }
            else{
                ones.push_back('1');
            }
        }
        ones.pop_back();
        string ans=ones+zeroes+"1";
       
        return ans;
    }
};