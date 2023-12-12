class Solution {
public:
    int maxGold(int n, int m, vector<vector<int>> a) {
        // code here
        for (int j= m-2; j >= 0;  j--) {
            for (int i= 0; i < n; i++) {
                int up= 0, down= 0;
                if (i)
                    up= a[i-1][j+1];
                if (i < n-1)
                    down= a[i+1][j+1];
                a[i][j]+= max({up, a[i][j+1], down});
            }
        }
        int maxi= 0;
        for (int i= 0; i < n; i++)
            maxi= max(maxi, a[i][0]);
        return maxi;
    }
};
