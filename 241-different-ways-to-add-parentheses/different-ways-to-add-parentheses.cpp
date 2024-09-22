class Solution {
public:

    vector<int> calc(string expression){

      
        vector<int> ans;
     
        for(int i=0;i<expression.size();i++){
           
            if(expression[i]=='+' || expression[i]=='-' || expression[i]=='*'){
                 vector<int> left= calc(expression.substr(0,i));
                 vector<int> right=  calc(expression.substr(i+1)) ;
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
            ans.push_back(stoi(expression));
        }
        return ans;

    }
    vector<int> diffWaysToCompute(string expression) {
        
        int n=expression.size();
       return  calc(expression);
        
    }
};