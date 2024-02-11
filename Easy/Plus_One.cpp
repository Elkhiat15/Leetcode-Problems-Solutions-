class Solution {
public:
    //keep adding -> if found carry at the end insert carry at begin 
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int i = digits.size() - 1; i>=0; i--){
            int sum = (carry + digits[i]);
            digits[i] = sum % 10;
            carry = sum / 10;
        }
        
        if(carry)
            digits.insert(digits.begin(), carry);
        return  digits;
    }
};