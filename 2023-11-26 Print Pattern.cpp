class Solution{
    vector<int> ans;
    void dec(int n, int N) {
        if (n < 0) {
            inc(n, N);
            return;
        }
        ans.push_back(n);
        if (n == 0) {
            inc(n+5, N);
            return;
        }
        dec(n-5, N);
    }
    void inc(int n, int N) {
        ans.push_back(n);
        if (n == N)
            return;
        inc(n+5, N);
    }
public:
    vector<int> pattern(int N) {
        // code here
        if (N == 0)
            return {0};
        dec(N, N);
        return ans;
    }
};
