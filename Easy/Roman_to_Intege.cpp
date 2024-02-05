class Solution {
public:
    int getVal(char c){
        switch (c){
        case 'I' : return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
    }
    
    int romanToInt(string s) {
        //Add the value of the current key -> check if the last value is less than the currunt -> then - 2* last value
        if(s.empty())
            return 0;
        
        int ans = getVal(s[0]);
                                 
        for(int i=1; i<s.size();i++){
            ans = ans + getVal(s[i]);
            if(getVal(s[i - 1 ]) < getVal(s[i]))
                ans = ans -2 * getVal(s[i - 1 ]);
        }
        return ans;
    }
};