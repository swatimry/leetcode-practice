class Solution {
public:

    vector<int> calc(string expression,int s,int e){

      
        vector<int> ans;
     
        for(int i=s;i<=e;i++){
           
            if(expression[i]=='+' || expression[i]=='-' || expression[i]=='*'){
                 vector<int> left= calc(expression,s,i-1);
                 vector<int> right=  calc(expression,i+1,e) ;
                 for(int j=0;j<left.size();j++){
                    for(int k=0;k<right.size();k++){
                       
                       if(expression[i]=='+'){
                         ans.push_back(left[j] +right[k]);
                       }
                       else if(expression[i]=='-'){
                          ans.push_back(left[j] - right[k]);
                       }
                       else if(expression[i]=='*'){
                        ans.push_back(left[j] * right[k]);
                       }
                    }
                 }
            }
           
            
        }
        if(ans.empty()){
            string number=expression.substr(s,e+1);
            cout<<number;
            ans.push_back(stoi(number));
        }
        return ans;

    }
    vector<int> diffWaysToCompute(string expression) {
        
        int n=expression.size();
       return  calc(expression,0,n-1);
        
    }
};