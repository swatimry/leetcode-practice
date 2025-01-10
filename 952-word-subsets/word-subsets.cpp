class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int>  freq(26);
        vector<string> result;
        for(auto x:words2){
           int temp[26]={0};
           for(auto ch:x){
             temp[ch-'a']++;
             freq[ch-'a']=max(temp[ch-'a'],freq[ch-'a']);
           }   
        }
        for(auto x:words1){
            int temp[26]={0};
            for(auto ch:x){
                temp[ch-'a']++;
            }
            bool flag=true;
            for(int i=0;i<26;i++){
                if(temp[i]<freq[i]){
                    flag=false;
                     break;
                }
            }
            if(flag){
                result.push_back(x);
            }
        }
        return result;

    }
};