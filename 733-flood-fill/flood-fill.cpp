class Solution {
public:
void dfs(int sr,int sc,int color,int repcolor,vector<vector<int>>& image,int n,int m){
    if(sr<0 ||sc<0|| sr>n-1 || sc>m-1 || image[sr][sc]!=repcolor || image[sr][sc]==color){
        return;
    }
    image[sr][sc]=color;
    dfs(sr,sc+1,color,repcolor,image,n,m);
dfs(sr,sc-1,color,repcolor,image,n,m);
dfs(sr+1,sc,color,repcolor,image,n,m);
dfs(sr-1,sc,color,repcolor,image,n,m);



}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int repcolor=image[sr][sc];
        int n=image.size();int m=image[0].size();
        dfs(sr,sc,color,repcolor,image,n,m);
        return image;
    }
};