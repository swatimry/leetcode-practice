class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push({'(',i});
            }
            else if(s[i]==')'  ){
                if(!st.empty()){
                    pair<char,int> temp=st.top();
                     if(temp.first=='('){
                    st.pop();
                }
                 else{
                    st.push({')',i});
                }
                }
               
                else{
                    st.push({')',i});
                }

            }
        }
       
        set<int> idx;
        while(!st.empty()){
            pair<char,int> temp=st.top();st.pop();
            idx.insert(temp.second);
        }
        string ans="";
        for(int i=0;i<s.size();i++){
            if(idx.find(i)==idx.end()){
               ans.push_back(s[i]);
            }
        }
        return ans;

    }
};