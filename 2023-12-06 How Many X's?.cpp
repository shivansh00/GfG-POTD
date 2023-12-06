class Solution {
    string s;
    char c;
    int cnt= 0;
  public:
    int countX(int L, int R, int X) {
        // code here
        while (++L < R)
            s+= to_string(L);
        c= '0'+ X;
        for (char &ch: s)
            cnt+= (c == ch);
        return cnt;
    }
};
