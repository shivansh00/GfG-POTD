class Solution {
    const long long mod= 1000000007;
  public:
    int sumOfNaturals(int n) {
        // code here
        return ((n%mod)*(n+1)%mod)%mod/2;
    }
};
