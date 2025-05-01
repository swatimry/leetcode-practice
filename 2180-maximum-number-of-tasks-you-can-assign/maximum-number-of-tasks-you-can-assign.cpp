class Solution {
public:
   bool cando(int n,vector<int>& tasks, vector<int>& workers, int pills, int strength){
   
    int pillsused=0;
    multiset<int> st(begin(workers),begin(workers)+n);
     for(int i=n-1;i>=0;i--){
       int reqsg=tasks[i];
       auto it = prev(st.end());

       if(*it>=reqsg){
          st.erase(it);
       }else if(pillsused>=pills){
        return false;
       }else{
           auto weakestworker= st.lower_bound(reqsg-strength);
           if(weakestworker==st.end()){
            return false;
           }
            st.erase(weakestworker);
            pillsused++;
           
       }
     }
    
    return true;
   }
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        int n=tasks.size();
        int m=workers.size();
      
        sort(tasks.begin(),tasks.end());
        sort(begin(workers),end(workers),greater<int>());
    
        int i=0;int j=min(m,n);
        int res=0;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(cando(mid,tasks,workers,pills,strength)){
                res=mid;
                i=mid+1;
            }else{
               j=mid-1;
            }
        }
        return res;
    }
};