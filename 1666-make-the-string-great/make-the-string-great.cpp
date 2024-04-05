class Solution {
public:
    string makeGood(string s) {
        
        
        bool flag=true;
        while(flag){
            int temp=s.size();
            int i=0;
            while(i<s.size()){
                
                   if(i<s.length()-1 && abs((int)s[i]-(int)s[i+1])==32){
                
                s.erase(i,1);
                s.erase(i,1);i++;
            }
            else{
                i++;
            }
            
            }
            if(temp==s.size()){
                flag=false;
            }   }
        return s;
    }
};