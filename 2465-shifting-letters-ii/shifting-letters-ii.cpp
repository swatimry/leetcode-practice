class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> diff(s.size(),0);
        for(int i=0;i<shifts.size();i++){
            int l=shifts[i][0];
            int r=shifts[i][1];
            int value= shifts[i][2]==1 ? 1 : -1;
            diff[l]+=value;
            if(r+1<s.size()){
                diff[r+1]+= (-value);
            }
        }
        for(int i=1;i<diff.size();i++){
            diff[i]=diff[i-1]+diff[i];
        }
        for(int i=0;i<s.size();i++){
            int val=(s[i]-'a'+diff[i])%26;
            if(val<0) val+=26;
            s[i]=val+'a';
        }
        return s;

    }
};