class Solution {
public:
      
bool help(int i, int j, string word,int idx,vector<vector<char>>& board,int m,int n){
    if(idx==word.size()){
        return true;
    }
    if(i<0 || j<0 || i>=m ||j>=n   || word[idx]!=board[i][j]){
        return false;
    }
    char temp=board[i][j];
    board[i][j]=' ';

    bool res= help(i+1,j,word,idx+1,board,m,n) || help(i-1,j,word,idx+1,board,m,n) || help(i,j+1,word,idx+1,board,m,n) || help(i,j-1,word,idx+1,board,m,n);
    board[i][j]=temp;
    return res;
    
}
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
              if( board[i][j]==word[0] && help(i,j,word,0,board,m,n)) return true;
            } 
        }
        return false;
    }
};