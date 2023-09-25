class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans='\0';
        for(auto i:s){
            ans=ans^i;
        }
        for(auto i:t){
            ans=ans^i;
        }
        return (char)ans;
    }
};