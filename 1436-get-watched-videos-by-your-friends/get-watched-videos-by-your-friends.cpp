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
        
         vector<pair<int,string>>v;
        for(auto it:freqatlevel){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end());
        vector<string> ans;
        for(auto it:v) ans.push_back(it.second);
        
        return ans;
        
        
    }
};