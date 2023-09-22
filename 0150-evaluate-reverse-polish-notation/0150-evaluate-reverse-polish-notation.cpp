class Solution {
public:
  
    int evalRPN(vector<string>& tokens) {
      stack<int> s;
      for(int i=0;i<tokens.size();i++){
          string op=tokens[i];
          if(op=="+"){
            int a=s.top();s.pop();
            int b=s.top();s.pop();
            int ans=b+a;
            s.push(ans);
       }
       else if(op=="-"){
           int a=s.top();s.pop();
            int b=s.top();s.pop();
            int ans=b-a;
            s.push(ans);
       }
       else if(op=="*"){
           int a=s.top();s.pop();
            int b=s.top();s.pop();
            int ans=b*a;
            s.push(ans);
       }
       else if(op=="/"){
          int a=s.top();s.pop();
            int b=s.top();s.pop();
            int ans=b/a;
            s.push(ans);
       
       }
       else{
           s.push(stoi(op));
       }
      }
      return s.top();   
    }
};