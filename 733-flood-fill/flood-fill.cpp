class Solution {
public:
    void help(int i,int j,int color,int src_color,int n,int m,vector<vector<int>>& image){
      if(i<0 || j<0 ||i>n-1 || j>m-1 || image[i][j]!=src_color){
        return;
      }
      image[i][j]=color;
      help(i,j+1,color,src_color,n,m,image);
       help(i,j-1,color,src_color,n,m,image);
        help(i-1,j,color,src_color,n,m,image);
         help(i+1,j,color,src_color,n,m,image);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int src_color=image[sr][sc];
        if(src_color!=color){

        help(sr,sc,color,src_color,n,m,image);
        }
        return image;
    }
};