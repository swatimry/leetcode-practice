class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string,int> m;
       string word="";
       string space=" ";
       for(int i=0;i<s1.size();i++){
          
          if(s1[i]==' '){
           
              m[word]++;
              word="";
          }else{

          word+=s1[i];
          }
       }
       m[word]++;
       word="";
       for(int i=0;i<s2.size();i++){
          if(s2[i]==' '){
       
              m[word]++;
              word="";
          }else{

          word+=s2[i];
          }
       }
       m[word]++;
       vector<string> ans;
       for(auto i:m){
        //cout<<i.first<<i.second<<endl;
        if(i.second==1){
           ans.push_back(i.first);
        }
       }
       return ans;
    }
};