class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        map<string,int> m;
        for(int i=0;i<arr1.size();i++){
            string num= to_string(arr1[i]);
            string temp="";
            for(int j=0;j<num.size();j++){
             temp+=num[j];
             m[temp]++;
            }
        }
        int maxlen=0;
        for(int i=0;i<arr2.size();i++){
            string num= to_string(arr2[i]);
            string temp="";
            for(int j=0;j<num.size();j++){
             temp+=num[j];
            if(m.find(temp)!=m.end()){
                maxlen=max(maxlen,j+1);
            }
            }
        }
        return maxlen;



    }
};