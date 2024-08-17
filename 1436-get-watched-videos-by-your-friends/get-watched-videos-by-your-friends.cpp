class Solution {
public:
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        
        map<string,int> freqatlevel;
        set<int> s;
        s.insert(id);
        queue<pair<int,int>> q;
        int currlevel=0;
        q.push({id,0});
        while(!q.empty()){
           auto i=q.front();
           q.pop();
           if(i.second==level){
             for(auto j:watchedVideos[i.first]){
                freqatlevel[j]++;
             }
            
           }
           for(auto j:friends[i.first]){
               if(s.find(j)==s.end()){
                s.insert(j);
                q.push({j,i.second+1});
               }
           }
          
        }
        vector<pair<string, int>> videoFreq(freqatlevel.begin(), freqatlevel.end());
        sort(videoFreq.begin(), videoFreq.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second < b.second;
        });

        vector<string> ans;
        for (const auto& p : videoFreq) {
            ans.push_back(p.first);
        }
        return ans;
        
        
    }
};