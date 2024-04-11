class Solution {
public:
    string removeDigit(string number, char digit) {
        int n=number.size();
        string ans="";
        bool flag=false;
        int idx=-1;
        int lastidx=-1;
        for(int i=0;i<number.size();i++){
             if(number[i]==digit){
                lastidx=i;
             }
            if(number[i]==digit && i+1<n && number[i]<number[i+1]){
               
               idx=i;
               break;
            }
        }
        if(idx!=-1){
            ans=number.substr(0,idx)+number.substr(idx+1,n-idx);
        }else{
            ans=number.substr(0,lastidx)+number.substr(lastidx+1,n-lastidx);
        }
        return ans;
    }
};