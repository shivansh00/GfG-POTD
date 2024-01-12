class Solution {
    int O12[3]= {-1, -1, -1};
    int len= INT_MAX;
  public:
    int smallestSubstring(string S) {
        // Code here
        for (int i= 0; i < S.length(); i++) {
            O12[S[i]-'0']= i;
            if (O12[0] != -1 and O12[1] != -1 and O12[2] != -1)
                len= min(len, *max_element(O12, O12+ 3)- *min_element(O12, O12+ 3)+ 1);
        }
        return len == INT_MAX? -1: len;
    }
};
