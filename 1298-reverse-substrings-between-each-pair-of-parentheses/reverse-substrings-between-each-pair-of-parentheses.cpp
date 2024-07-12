class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> stk; 
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                stk.push('(');
            }
            else if(s[i]>='a' && s[i]<='z'){
              stk.push(s[i]);
               }
            
            
            else if( s[i]==')'){
                 list<char> l;
                 while(stk.top()!='('){
                    
                   l.push_back(stk.top());
                    stk.pop();
                 }
                 stk.pop();
                 while(!l.empty()){
                    stk.push(l.front());
                    l.pop_front();

                 }
            }
        }
        string ans="";
        while(!stk.empty()){
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};