class Solution {
public:
   string transform(string word){
    string temp="";
    for(int i=0;i<word.size();i++){
        int x=word[i]-'a';
        x=(x+1)%26;
        char z=x+'a';
        temp+=z;
    }
    return temp;
   }
    char kthCharacter(int k) {
        string word="a";
       
       
        while(word.size()<k){
            word=word+transform(word);
           
        }
        return word[k-1];
    }
};