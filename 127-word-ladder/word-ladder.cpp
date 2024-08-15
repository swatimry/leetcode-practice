class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string>  s;
        
        for(auto i:wordList){
            s.insert(i);
        }
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        s.erase(beginWord);
        while(!q.empty()){
           auto curr=q.front();
           string currstr=curr.first;
           int currlevel=curr.second;
           q.pop();
           for(int i=0;i<currstr.length();i++){
              char original= currstr[i];
              for(char ch ='a'; ch<='z';ch++){
                currstr[i]=ch;
                
                if(s.find(currstr)!=s.end()){
                    if(currstr==endWord){
                    cout<<endWord<<" "<<currstr;
                    return currlevel+1;
                }
                    s.erase(currstr);
                    q.push({currstr,currlevel+1});

                }

              }
              currstr[i]=original;
           }
        }
        return 0;
    }
};