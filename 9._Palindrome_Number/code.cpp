class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        bool pal = false;
        int num = x;
        int len = 0;
        vector<int> vec;
        
        for(int i = 0; num != 0; i++) {
            len++;
            num /= 10;
        }
        
        num = x;
        int dig = 0;
        
        for(int i = 0; i < len; i++) {
            long int pow1 = 1;
            long int pow2 = 1;
            
            for(int j = 0; j < len - i - 1; j++)
                pow1 *= 10;
            
            for(int k = 0; k < len - i; k++)
                pow2 *= 10;
            
            dig = x / pow1 - (x / pow2) * 10;
            cout << dig << ", ";
            vec.push_back(dig);
        }
        
        for(int i = 0; i < len; i++) {
            if(vec[i] != vec[len - i - 1])
                return false;
        }
        return true;
    }
};
