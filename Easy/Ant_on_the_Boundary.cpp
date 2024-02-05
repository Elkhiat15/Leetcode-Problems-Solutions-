class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        // calculate the cumulative sum whenever it = 0 update answer
        int cumsum =0 ;
        int cnt =0 ;
        for(int i=0; i<nums.size(); i++){
            cumsum = cumsum + nums[i];
            if(!cumsum)
                cnt++;
        }
        return cnt;
    }
};