class Solution {
public:
    string triangleType(vector<int>& nums) {
        // sort the array to shorten the code
        sort(nums.begin(), nums.end());
        if(nums[2] >= nums[1] + nums[0] )
            return "none";

        if(nums[2] == nums[0])
            return "equilateral";
        
        if(nums[0] == nums[1] || nums[2] == nums[1])
            return "isosceles";
         
        return "scalene";
        
    }
};