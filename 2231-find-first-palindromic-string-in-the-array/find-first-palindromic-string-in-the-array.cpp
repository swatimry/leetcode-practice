class Solution {
public:
   bool ispalin(string s){
       int n=s.size();
       int i=0;int e=n-1;
       while(i<=e){
           if(s[i]==s[e]){
               i++;e--;
           }
           else{
               return false;
           }
       }
       return true;
   }
    string firstPalindrome(vector<string>& words) {
      for(int i=0;i<words.size();i++){
          if(ispalin(words[i])){
              return words[i];
          }
      }
      return "";
    }
};