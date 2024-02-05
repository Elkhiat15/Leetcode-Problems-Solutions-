class Solution {
public:
  
    bool isValid(string s) {
// keep track the opening ones then each time check if the clossing matchs the top of stack -> if not matchs return false  
        if(s.empty())
            return true;
            string st;
        for(int i=0 ; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' ||s[i] == '[' )
                st.push_back(s[i]);
            else{
                if(st.empty())
                    return false;
                if(
                    st.back() == '(' && s[i] == ')' || 
                    st.back() == '[' && s[i] == ']' ||
                    st.back() == '{' && s[i] == '}'
                  )
                    st.pop_back();
                else 
                    return false;
                     
        }
        }
        
        return st.empty();
    }
};