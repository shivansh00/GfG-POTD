class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        unsigned int ans= 1;
        while (n) {
            if (n&1)
                return ans;
            n>>= 1;
            ans++;
        }
        return 0;
    }
};
