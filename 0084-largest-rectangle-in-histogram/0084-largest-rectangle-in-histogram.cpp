class Solution {
public:
    void nextsmaller(vector<int>& next,vector<int>& heights){
        stack<int> s;
        int n=heights.size();
        s.push(n-1);
        next[n-1]=-1;
        int x=n-2;
        for(int i=n-2;i>=0;i--){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                 s.pop();
            }
            if(s.empty()){
                next[x]=-1;
            }
            else{
                next[x]=s.top();
            }
            s.push(i);
            x--;
        }
    }
    void prevsmaller(vector<int>& prev,vector<int>& heights){
        stack<int> s;
        int n=heights.size();
        s.push(0);
        prev[0]=-1;
       
        for(int i=1;i<n;i++){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                 s.pop();
            }
            if(s.empty()){
                prev[i]=-1;
            }
            else{
                prev[i]=s.top();
            }
            s.push(i);
            
        }
    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> next(n);
        vector<int> prev(n);
        nextsmaller(next,heights);
        prevsmaller(prev,heights);
        int area=INT_MIN;
        int temp;
        for(int i=0;i<n;i++){
            cout<<next[i]<<" "<<prev[i]<<endl;
            if(next[i]==-1){
                next[i]=n;
            }
            temp=(next[i]-prev[i]-1)*heights[i];
            area=max(area,temp);
            
        }
        return area;
    }
};