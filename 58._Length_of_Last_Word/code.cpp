class Solution {
public:
    int lengthOfLastWord(string s) {
        bool letter = false;
        int end = 0;
        
        for(int i = s.length() - 1; i > 0; i--) {
            if(s[i] != ' ') {
                end = i;
                break;
            }
        }
        for(int i = end; i >= 0; i--) {
            if(s[i] == ' ') {
                return end - i;
            }
            else if(i == 0)
                return ++end;
        }
        end++;
        return end;
    }
};
