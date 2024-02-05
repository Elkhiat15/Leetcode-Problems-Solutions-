class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // sort the list -> iterate from 0:min size the break after any mismatch then erase from current index to end 
        
        sort(strs.begin(),strs.end());
        string ans = strs[0];
        for(int i = 1; i< strs.size(); i++){
            int j=0;
            while(j < min(ans.size(), strs[i].size()) ){
                  if(strs[i][j] != strs[i - 1 ][j] ){
                     break;
                  }
                j++;
            }
            
            if(ans.empty())
                return "";
            ans.erase(j , ans.size());

            
        }
        return ans;
    }
};