class Solution {
public:
string check(string word,set<string> dict){
    string temp="";
    for(int i=0;i<word.size();i++){
        temp+=word[i];
        if(dict.find(temp)!=dict.end()){
            return temp;
        }
    }
    return word;
}
    string replaceWords(vector<string>& dictionary, string sentence) {
        set<string> dict;
        for(auto i:dictionary){
            dict.insert(i);
        }
        vector<string> temp;
        string word,res;
         istringstream iss(sentence);
         while(iss>>word){
           res= check(word,dict);
           temp.push_back(res);
         }
         string ans="";
         for(auto i:temp){
            ans+=i+" ";
         }
         ans.erase(ans.size()-1);
         return ans;
    }
};