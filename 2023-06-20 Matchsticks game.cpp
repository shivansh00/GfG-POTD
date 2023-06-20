class Solution {
  public:
    int matchGame(long long N) {
        // code here
        N%= 5;
        return N? N: -1;
    }
};
