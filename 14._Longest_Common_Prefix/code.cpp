class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string pfx = "";
        int min = 200;
        
        for(int i = 0; i < strs.size(); i++) {
            if(strs[i].length() < min)
                min = strs[i].length();
        }
                    
        
        bool mch = true;
        for(int i = 0; i < min; i++) {
            for(int j = 0; j < strs.size() - 1; j++) {
                if(strs[j][i] != strs[j + 1][i])
                   mch = false;
            }
            if(mch == true)
                pfx.push_back(strs[0][i]);
        }
        return pfx;
    }
};
