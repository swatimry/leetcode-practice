class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans(A.size(),0);
        ans[A.size()-1]=A.size();
        int n=A.size();
        set<int> temp;
        if(A[0]==B[0]){
                ans[0]=1;
                
            }
            temp.insert(A[0]);
            temp.insert(B[0]);
        for(int i=1;i<=n-2;i++){
            if(A[i]==B[i]){
                ans[i]=ans[i-1]+1;
              
                temp.insert(A[i]);
            }
            else{
          
                if(temp.find(A[i])!=temp.end() && temp.find(B[i])!=temp.end()){
                     ans[i]=ans[i-1]+2;
                     cout<<"here"<<ans[i];
                     
                }
                if(temp.find(A[i])==temp.end() && temp.find(B[i])==temp.end()){
                     ans[i]=ans[i-1];
                    
                      temp.insert(A[i]);
                      temp.insert(B[i]);
                       cout<<"here1"<<ans[i];
                }
                else if(temp.find(A[i])==temp.end() && temp.find(B[i])!=temp.end()){
                     ans[i]=ans[i-1]+1;
                      temp.insert(A[i]);
                      cout<<"here2"<<ans[i];
                      
                }
                else if(temp.find(A[i])!=temp.end() && temp.find(B[i])==temp.end()){
                     ans[i]=ans[i-1]+1;
                      temp.insert(B[i]);
                      cout<<"here3"<<ans[i];
                      
                }
            }
         
        }
        return ans;
    }
};