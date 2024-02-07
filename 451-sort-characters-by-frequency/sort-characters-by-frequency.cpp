class Solution {
public:
    string frequencySort(string s) {
        auto cmp=[](const pair<char,int>&a,const pair<char,int>&b){
            return a.second<b.second;
        };
        unordered_map<char,int> m;
        for(auto i:s){
            m[i]++;
        }
        priority_queue<pair<char,int>,vector<pair<char,int>>,decltype(cmp)> pq(cmp);

        for(auto i:m){
            pq.push({i.first,i.second});
        }
        string ans="";
        while(!pq.empty()){
            pair<char,int> temp=pq.top();
            pq.pop();
            ans.append(temp.second,temp.first);
        
        }
        return ans;


    }
};