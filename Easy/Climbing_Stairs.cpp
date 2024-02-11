class Solution {
public:
    // memorize at n == k  what is the max number you reach
    map<int,int> dp;
    int climbStairs(int n) {
        if(auto it = dp.find(n); it!= dp.end())
            return it->second;
        
        if(n==0 || n == 1) return 1;
        dp[n]= climbStairs(n-1) + climbStairs(n-2);
        return dp[n];
    }
};