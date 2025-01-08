class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() == 0)
            return 0;
        if (haystack.length() == 0)
            return -1;
      
        vector<int> lps(needle.size());
        lps[0]=0;
        int i=1;
        int length=0;
        while(i<needle.size()){
             if(needle[i]==needle[length]){
                length++;
                lps[i]=length;
                i++;
             }else{
                if(length!=0){
                  length=lps[length-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
             }
        }
        for(auto x: lps){
            cout<<x<<" ";
        }
        i=0;int j=0;
        while(i<haystack.size()){
            if(needle[j]==haystack[i]){
                i++;j++;
            }
            if(j==needle.size()){
                return i-j;

            }
            else if(needle[j]!=haystack[i]){
                if(j!=0){

                j=lps[j-1];
                }else{
                    i++;
                }
            }
        }
        return -1;
    }
};