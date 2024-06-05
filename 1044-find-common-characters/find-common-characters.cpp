class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
int cnt;
        for(int j=0;j<words[0].size();j++){
           cnt=0;
          for(int i=1;i<words.size();i++){
           
             for(int k=0;k<words[i].size();k++){
                if(words[0][j]==words[i][k]){
                    cnt++;
                    words[i][k]=',';
                    break;
                }
             }
        }
        if(cnt==words.size()-1){
            string temp(1,words[0][j]);
             ans.push_back(temp);
        }
        }
        return ans;
       
    }
};