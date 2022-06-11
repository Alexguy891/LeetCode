class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int carry = 0;
        
        while(a.length() != b.length()) {
            if(a.length() > b.length())
                b.insert(b.begin(), '0');
            else if (a.length() < b.length()) 
                a.insert(a.begin(), '0');
        }
        
        cout << a << " + " << b << '\n';
        
        for(int i = 0; i < a.length(); i++) {
            int digA = 0;
            int digB = 0;
            int newDig = 0;
            
            if(a[i] == '0')
                digA = 0;
            else
                digA = 1;
            
            if(b[i] == '0')
                digB = 0;
            else
                digB = 1;
            
            newDig = digA + digB + carry;
            
            if(newDig > 1) {
                newDig = 0;
                carry = 1;
            }
            
            cout << newDig;
            
            result.insert(result.begin(), static_cast<char>(newDig));
        }
        
        return result;
    }
};
