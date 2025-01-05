class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        for(int i=shifts.size()-1;i>0;i--){
             shifts[i-1]=(shifts[i-1]+shifts[i])%26;
        }
       for(int i=0;i<s.size();i++){
            int val=shifts[i]%26;
            
            if(val<0){
                val+=26;
                
            }
            int char_value= s[i]-'a';
            int tot_shift=(char_value+val)%26;
           // cout<<tot_shift<<" ";
           s[i]= tot_shift+'a';
        }
        return s;
    }
};