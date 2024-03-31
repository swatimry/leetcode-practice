class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char res=letters[0];
        int s=0;int e=letters.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            mid=s+(e-s)/2;
            if(letters[mid]==target && mid+1<letters.size()-1 && letters[mid]!=letters[mid+1]){
                return letters[mid+1];
            }
            if(letters[mid]>target){
                res=letters[mid];
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return res;
    }
};