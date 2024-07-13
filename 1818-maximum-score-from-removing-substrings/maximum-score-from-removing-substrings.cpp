class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int cost=0;
        vector<char> s1;
        if(x>y){
          for(int i=0;i<s.size();i++){
            if(s[i]=='b' && !s1.empty() && s1.back()=='a'){
                cost+=x;
                s1.pop_back();
            }
            else{
                s1.push_back(s[i]);
            }
          }
          vector<char> s2;
          for(int i=0;i<s1.size();i++){
             if(s1[i]=='a' && !s2.empty() && s2.back()=='b'){
                cost+=y;
                s2.pop_back();
            }
            else{
                s2.push_back(s1[i]);
            }
          }
         
          
        }
        else{
         for(int i=0;i<s.size();i++){
            if(s[i]=='a' && !s1.empty() && s1.back()=='b'){
                cost+=y;
                s1.pop_back();
            }
            else{
                s1.push_back(s[i]);
            }
          }
          vector<char> s2;
          for(int i=0;i<s1.size();i++){
            if(s1[i]=='b' && !s2.empty() && s2.back()=='a'){
                cost+=x;
                s2.pop_back();
            }
            else{
                s2.push_back(s1[i]);
            }
          }
         



        }
        return cost;
    }
};