class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int n=word1.size();
        int m=word2.size();
        int i=0;
        while(n>0 && m>0){
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
            i++;
            n--;m--;

        }
         while(n>0 ){
            ans.push_back(word1[i]);
           
            i++;
            n--;

        }
     
        while(m>0 ){
            ans.push_back(word2[i]);
           
            i++;
            m--;

        }return ans;
    }
};