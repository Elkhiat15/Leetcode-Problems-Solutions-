class Solution {
public:
    // skip spaces at first of st -> check and save sign -> build the number 
    int myAtoi(string st) {
         int ln =  st.length(), i=0;
    while (st[i] == ' ') i++;
    int sign = 1*(st[i]=='+') - 1*(st[i] =='-');
    i++;
    if(!sign) sign=1,i--;
    long ans =0 ;

    while (i<ln && (st[i]<='9' && st[i]>='0')){
        ans = ans*10 +(st[i++] - '0');

        if(ans>INT_MAX || -ans<INT_MIN)
            return (sign < 0)? INT_MIN:INT_MAX;
    }
    return (int)(ans*sign); 
    }
};