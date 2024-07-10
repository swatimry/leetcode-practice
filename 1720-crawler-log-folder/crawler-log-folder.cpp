class Solution {
public:
    int minOperations(vector<string>& logs) {
        int steps=0;
        for(auto i:logs){
            if(i=="../"){
                if(steps>0){

              steps--;
                }
            }
            else if(i=="./"){
                continue;
            }
            else{
                steps++;
            }
        }
        return steps;
    }
};