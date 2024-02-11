class Solution {
public:
// each time i expand the both side and keep track the max ans || handle even pal    
void Check(string s, int l, int r, string& res){
    while (l>=0 && r<s.size()){
        if(s[l] != s[r])
            break;
        l--,r++;
    }
    if(r-l >res.size())
        res= s.substr(l + 1 , r - l - 1);
}
string longestPalindrome(string s) {
    string res="";
    for (int i = 0; i < s.length(); ++i) {
        Check(s, i,i,res);
        Check(s, i,i+1,res);
    }
    return res;
}
    
    
    
};