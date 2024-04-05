class Solution {
public:
    string makeGood(string s) {
        stack<char> stk;
        
        for(int i=0;i<s.size();i++){
            if(!stk.empty() && abs((int)stk.top()-(int)s[i])==32){
                stk.pop();
            }
            else{
                stk.push(s[i]);
            }
        }
        string ans="";
        while(!stk.empty()){
            ans=stk.top()+ans;
            stk.pop();
        }
        return ans;
    }
};