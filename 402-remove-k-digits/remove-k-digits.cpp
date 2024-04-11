class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        for(int i=0;i<num.size();i++){
            while(!s.empty() && s.top()>num[i] && k>0){
                s.pop();k--;
            }
            s.push(num[i]);
        }
        while(k-->0){
            s.pop();
        }
        string ans="";
       
        while(!s.empty()){
           ans+=s.top();
           s.pop(); 
        }
        
        reverse(ans.begin(),ans.end());
        string new_str="";
        int idx=-1;
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='0' && idx==-1){
                continue;
            }
            new_str+=ans[i];idx=0;
        }
        return new_str.size()==0? "0" : new_str;
    }
};