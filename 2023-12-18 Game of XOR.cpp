class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        // code here
        if (N%2 == 0)
            return 0;
        int x= 0;
        for (int i= 0; i < N; i+= 2)
            x^= A[i];
        return x;
    }
};
