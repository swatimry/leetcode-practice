class Solution {
public:
  vector<int> nextsmaller(vector<int> & heights){
        int n=heights.size();
        vector<int> ans(n);
        stack<int> temp;
        temp.push(-1);
        for(int i=n-1;i>=0;i--){
            while(temp.top()!=-1 && heights[temp.top()]>=heights[i] ){
                temp.pop();
            }
            ans[i]=temp.top();
            temp.push(i);
        }
        return ans;
    }
    vector<int> prevsmaller(vector<int> & heights){
        int n=heights.size();
        vector<int> ans(n);
        stack<int> temp;
        temp.push(-1);
        for(int i=0;i<n;i++){
            while(temp.top()!=-1 && heights[temp.top()]>=heights[i] ){
                temp.pop();
            }
            ans[i]=temp.top();
            temp.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {

     int n=heights.size();
     vector<int> next(n);
     vector<int> prev(n);
     next=nextsmaller(heights);
     prev=prevsmaller(heights);
     int area=INT_MIN;
     for(int i=0;i<n;i++){
         int ne=next[i];
         int p=prev[i];
       
        if(ne==-1){
            ne=n;
        }
        int width=ne-p-1;
        
        int curr_Area=heights[i]*width;
        area=max(curr_Area,area);
     }  

     return area;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
  
       if(matrix.size()==0){return 0;}
      
     
      
        vector<int> temp(matrix[0].size(),0);
        
       
        
          int maximal=INT_MIN;
          int curarea=0;
          
         
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                
              if(matrix[i][j]=='1'){
                  cout<<matrix[i][j];
                  temp[j]+=1;
                 
              }
              else{
                  temp[j]=0;
              }

            }
            
            curarea=largestRectangleArea(temp);
            
            
            maximal=max(curarea,maximal);
        } 
        
        return maximal;
    }
};