class Solution {
    static vector<int> dp;
    const int MOD= 1000000007;
    void init() {
        dp[1]= 1;
        for (int i= 2; i < 100001; i++)
            dp[i]= (dp[i-1]+(long)dp[i-2])% MOD;
    }
  public:
    int nthFibonacci(int n){
        // code here
        if (dp[1] == 0)
            init();
        return dp[n];
    }
};

vector<int> Solution::dp= vector<int>(100001);
