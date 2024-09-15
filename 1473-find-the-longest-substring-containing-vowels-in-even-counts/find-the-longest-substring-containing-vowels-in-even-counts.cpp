class Solution {
public:
    int findTheLongestSubstring(string s) {
        int ans=0;
        unordered_map<string,int> m;
        int n=s.size();
        vector<bool> temp(5,0);
        
        string currstate="00000";
        m[currstate]=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='a'){
                temp[0]=temp[0]^1;
            }
            else if(s[i]=='e'){
                temp[1]=temp[1]^1;
            }
            else if(s[i]=='i'){
                temp[2]=(temp[2]^1);
            }
            else if(s[i]=='o'){
                temp[3]=temp[3]^1;
            }
            else if(s[i]=='u'){
                temp[4]=(temp[4]^1);
            }
            currstate="";
            for(int j=0;j<5;j++){
                currstate+=to_string(temp[j]);
            }
            if(m.find(currstate)!=m.end()){
              ans=max(ans,i-m[currstate]);
            }
            else{
                m[currstate]=i;
            }
        }

        return ans;

    }
};