class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n) {
        // Your code here
        int x= m^n;
        for (int i= 1; i <= 32; i++, x>>=1)
            if (x&1)
                return i;
        return -1;
    }
};
