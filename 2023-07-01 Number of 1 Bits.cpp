class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int cnt= 0;
        while (N) {
            N&= N-1;
            cnt++;
        }
        return cnt;
    }
};
