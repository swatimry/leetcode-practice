class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                temp.push_back(s[i]);
            }
            else{
                if(temp.size()!=0){
                    words.push_back(temp);
                    temp="";
                }
            }
        }
        if(temp.size()!=0){
                    words.push_back(temp);
                   
                }
        string ans="";
        reverse(words.begin(),words.end());
        cout<<words.size();
        for(int i=0;i<words.size();i++){
            ans+=words[i];
            if(i!=words.size()-1){
                ans+=" ";
            }
        }
        return ans;

    }
};