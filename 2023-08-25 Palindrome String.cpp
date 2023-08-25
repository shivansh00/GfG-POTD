class Solution {
    int l, r;
public:
    int isPalindrome(string S) {
        // Your code goes here
        l= 0, r= S.length()- 1;
        while (l < r)
            if (S[l++] != S[r--])
                return 0;
        return 1;
	}
};
