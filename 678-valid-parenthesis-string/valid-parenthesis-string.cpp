    class Solution {
    public:
            
     
        bool checkValidString(string s) {
            int n=s.size();
            stack<int > s1;
            stack<int> s2;
            for(int i=0;i<n;i++){
                if(s[i]=='*'){
                    s2.push(i);
                }
                else if(s[i]=='('){
                    s1.push(i);
                }
                else{
                    if(!s1.empty()){
                        s1.pop();
                    }
                    else if(!s2.empty()){
                        s2.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
            if(!s1.empty()){
                while(!s2.empty()){
                    if( !s1.empty() && s2.top()>s1.top()){
                        s1.pop();
                        s2.pop();                    }
                        else{
                    s2.pop();
                }

                       
                }
            }
            return s1.size()==0;
           
        }
    };