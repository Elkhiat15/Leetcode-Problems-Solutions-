class Solution {
    long long dp[31];
    bool vs[31]={0};
public:
    int fib(int n) {
        //DP memorization top down approach
     if(n==0) return 0;
     if(n==1) return 1;
     if(vs[n]) return dp[n];
     vs[n]=true;
     dp[n]=fib(n-1)+fib(n-2);
     return  dp[n];   
    }
};