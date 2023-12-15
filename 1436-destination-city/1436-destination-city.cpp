class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> temp;
        for(int i=0;i<paths.size();i++){
            temp.insert(paths[i][0]);
        }
        for(int i=0;i<paths.size();i++){
            string candidate=paths[i][1];
            if(temp.find(candidate)==temp.end()){
                return candidate;
            }
        }
        return "";
    }
};