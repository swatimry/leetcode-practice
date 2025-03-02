class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(char i:s){
            if(isalnum(i)){
                ans.push_back((char)tolower(i));
            }
        }
        string rans=ans;
        reverse(ans.begin(),ans.end());
        if(ans==rans){
           
            return true;
        }
        return false;
    }
};