class Solution {
public:
    int compress(vector<char>& chars) {
        int ans=0;
        int ci=0;
        int i=0;
        while(i<chars.size()){
            int j=i+1;
            while(j<chars.size() && chars[i]==chars[j]){
                j++;
            }
            chars[ci++]=chars[i];
            int cnt=j-i;
            if(cnt!=1){
                string tempcnt=to_string(cnt);

                for(auto h:tempcnt){
                    chars[ci++]=h;
                }

            }
            i=j;
        }
        return ci;
    }
};