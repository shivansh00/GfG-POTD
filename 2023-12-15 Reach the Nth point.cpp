class Solution {
    const int mod= 1e9+7;
public:
	int nthPoint(int n){
	    // Code here
	    vector<int> dp(n);
	    dp[0]= 1, dp[1]= 2;
	    for (int i= 2; i < n; i++)
	        dp[i]= (0L+ dp[i-1]+ dp[i-2])% mod;
        return dp[n-1];
	}
};
