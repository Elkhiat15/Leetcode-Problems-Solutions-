class Solution {
public:
int lengthOfLongestSubstring(string s) {
      if(s.empty())
        return 0;
    int ans=0;
    int st=0;
    vector<bool> Vis(256, false);
    int cnt =0;
    for(int i=0; i<s.length();i++){
        while (Vis[s[i]])
            {
                Vis[s[st++]] = false;
            }
        Vis[s[i]] = true;
        ans = max(ans, i-st+1);
        }

    return ans;
}
};