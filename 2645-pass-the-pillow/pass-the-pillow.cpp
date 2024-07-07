class Solution {
public:
    int passThePillow(int n, int time) {
       bool dir=true;int i=0;int person=1;
       while(i<time){
          i++;
           if(dir==true){
            person++;
          }else if(dir==false){
            person--;
          }
          if(i%(n-1)==0){
            dir=!dir;
          }
         
       }
       return person;
    }
};