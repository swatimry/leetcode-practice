class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
      vector<int> ans(queries.size());
      vector<int> prefix(words.size()+1,0);
      
      

      for(int i=0;i<words.size();i++){
         prefix[i+1]=prefix[i];
        if(words[i][0]=='a' ||words[i][0]=='e' ||words[i][0]=='i' ||words[i][0]=='o' ||words[i][0]=='u' ){
            int n=words[i].size();
            if(words[i][n-1]=='a' ||words[i][n-1]=='e' ||words[i][n-1]=='i' ||words[i][n-1]=='o' ||words[i][n-1]=='u' ) {
                prefix[i+1]=prefix[i]+1;
            } 
        }
        
      }
      for(int i=0;i<prefix.size();i++){
        cout<<prefix[i]<<" ";
      }
      for(int i=0;i<queries.size();i++){
        int l=queries[i][0];
        int r=queries[i][1];
        ans[i]=prefix[r+1]-prefix[l];
      }


      return ans;   
    }
};