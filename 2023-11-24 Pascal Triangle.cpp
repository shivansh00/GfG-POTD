class Solution {
    static vector<vector<long long>> pascalsTriangle;
    static int maxi;
    const int MOD= 1e9+7;
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        if (n == 1)
            pascalsTriangle[0]= {1};
        if (n-1 <= maxi)
            return pascalsTriangle[n-1];
        for (int i= maxi; i < n; i++) {
            pascalsTriangle[i].resize(i+1, 1);
            for (int j= 1; j < i; j++)
                pascalsTriangle[i][j]= (pascalsTriangle[i-1][j-1]+ pascalsTriangle[i-1][j]) % MOD;
        }
        return pascalsTriangle[n-1];
    }
};

vector<vector<long long>> Solution::pascalsTriangle(1e3);
int Solution::maxi= 0;
