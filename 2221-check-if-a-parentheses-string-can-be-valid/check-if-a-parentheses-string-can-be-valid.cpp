class Solution {
public:
    bool canBeValid(string s, string locked) {
        if (s.size() % 2 != 0) 
            return false;

        int openCount = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (locked[i] == '0' || s[i] == '(') 
                openCount++;
            else 
                openCount--;
            if (openCount < 0) 
                return false;
        }

        openCount = 0;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (locked[i] == '0' || s[i] == ')') 
                openCount++;
            else 
                openCount--;
            if (openCount < 0) 
                return false;
        }
        return true;
    }
};