class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        for(int i=0;i<s.size();i+=k){
           string temp="";
           if(i+k-1<s.size()){
            temp+=s.substr(i,k);
           }else{
            temp+=s.substr(i,s.size()-i);
            int times=(k-(s.size()-i));
            string  result(times,fill);
            cout<<result;
            temp+=result;
           }
            
            ans.push_back(temp);
        }
        return ans;
    }
};