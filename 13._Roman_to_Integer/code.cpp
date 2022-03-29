class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        for(int i = s.length() - 1; i >= 0; i--) {
            switch(s[i]) {
                case 'I':
                    if(i < s.length() - 1) {
                        if(s[i+1] == 'V' || s[i+1] == 'X')
                            num -= 1;
                        else
                            num += 1;
                    }
                    else {
                        num += 1;
                    }
                    break;
                case 'V':
                    num += 5;
                    break;
                case 'X':
                    if(i < s.length() - 1) {
                        if(s[i+1] == 'L' || s[i+1] == 'C')
                            num -= 10;
                        else
                            num += 10;
                    }
                    else {
                        num += 10;
                    }
                    break;
                case 'L':
                    num += 50;
                    break;
                case 'C':
                    if(i < s.length() - 1) {
                        if(s[i+1] == 'D' || s[i+1] == 'M')
                            num -= 100;
                        else
                            num += 100;
                    }
                    else {
                        num += 100;
                    }
                    break;
                case 'D':
                    num += 500;
                    break;
                case 'M':
                    num += 1000;
                    break;
            }
        }
        return num;
    }
};
