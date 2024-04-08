class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cir=0,sq=0;
        for(auto i:students){
           if(i==0){
            cir++;
           }
           else{
            sq++;
           }
        }
        cout<<cir<<" "<<sq;
        int scir=0,ssq=0;
        for(int i=0;i<sandwiches.size();i++){
         if(sandwiches[i]==0 ){
           if(cir>0){
            cir--;
           }
           else{
            break;
           }
           
         }
         else{
            if(sq>0){
            sq--;
           }
           else{
            break;
           }
         }
        }
        return sq+cir;
    }
};