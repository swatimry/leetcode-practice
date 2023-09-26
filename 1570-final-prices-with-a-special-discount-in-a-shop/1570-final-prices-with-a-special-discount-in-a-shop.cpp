class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        int n=prices.size();
        vector<int> ans(n);
        s.push(prices[n-1]);
        int x=n-2;
        ans[n-1]=0;
        for(int i=n-2;i>=0;i--){
            while(!s.empty() && s.top()>prices[i] ){
                s.pop();
            }
            if(s.empty()){
                ans[x]=0;
                 s.push(prices[i]);
            }
            else{
                ans[x]=s.top();
                 s.push(prices[i]);

            }
           x--;
        }
        for(int i=0;i<n;i++){
            int temp=ans[i];
            cout<<temp;
            ans[i]=prices[i]-temp;
        }
        return ans;

    }
};