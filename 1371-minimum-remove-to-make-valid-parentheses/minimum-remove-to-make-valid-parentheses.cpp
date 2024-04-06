class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int op=0;int cp=0;
        for(int i=0;i<s.size();i++){
                if(s[i]=='('){
                    op++;
                }
                else if(s[i]==')'){
                    if(op==0){
                        s[i]='*';
                    }
                    else{
                        op--;
                    }
                }
        }
         
        for(int i=s.size()-1;i>=0;i--){
                if(s[i]==')'){
                    cp++;
                }
                else if(s[i]=='('){
                    if(cp==0){
                        s[i]='*';
                    }
                    else{
                        cp--;
                    }
                }
        }
       
        string ans="";
        for(int i=0;i<s.size();i++){
                if(s[i]!='*'){
                    ans.push_back(s[i]);
                }
               
        }
        return ans;
    }
};