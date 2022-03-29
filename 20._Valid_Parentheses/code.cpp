class Solution {
public:
    bool isValid(string s) {
        vector<char> vec;
        

        for(int i = 0; i < s.length(); i++) {
            switch(s[i]) {
                case '(':
                    vec.push_back(')');
                    break;
                case '{':
                    vec.push_back('}');
                    break;
                case '[':
                    vec.push_back(']');
                    break;
                default:
                    if(!vec.empty() && vec.back() == s[i])
                        vec.pop_back();
                    else
                        return false;                 
            }
        }
        return (vec.empty());
    }
};
