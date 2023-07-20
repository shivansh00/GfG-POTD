class Solution {
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S) {
       //Your code here
        vector<int> f(26);
        for (char &c: S)
            f[c-'a']++;
        for (char &c: S)
            if (f[c-'a'] == 1)
                return c;
        return '$';
    }

};
