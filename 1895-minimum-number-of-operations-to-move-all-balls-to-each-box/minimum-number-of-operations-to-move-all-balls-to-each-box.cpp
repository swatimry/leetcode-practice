class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size());
        vector<int> ones;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1'){
             ones.push_back(i);
            }
        }
        for(int i=0;i<boxes.size();i++){
            int temp=0;
            for(int j=0;j<ones.size();j++){
               
                temp+=abs(i-ones[j]);
            }
            
            ans[i]=temp;
        }
        return ans;
        




            }
};