class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n=str1.size();
        int m =str2.size();
        string shorter="";
        if(n<=m){
            shorter=str1;
        }
        else{
            shorter=str2;
        }
        int x=shorter.size();
        string temp=shorter;
        while(x>0){
            cout<<temp<<endl;
            if(n%x==0 && m%x==0){
               
                string a="";
                for(int i=0;i<n/x;i++){
                    a+=temp;
                }
                string b="";
                for(int i=0;i<m/x;i++){
                    b+=temp;
                }
                
                if(a==str1 && b==str2){
                    return temp;
                }
            }
            temp=shorter.substr(0,x-1);
            x--;

        }
        return "";
    }
};