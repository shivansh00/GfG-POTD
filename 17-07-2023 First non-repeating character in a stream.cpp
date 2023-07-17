class Solution {
    vector<int> fm;
    string s, ans;
public:
	string FirstNonRepeating(string A){
	    // Code here
	    fm.resize(26);
	    for (char &c: A) {
	        fm[c-'a']++;
	        if (fm[c-'a'] == 1)
	            s.push_back(c);
	        char x= '#';
            for (char &ch: s)
                if (fm[ch-'a'] == 1) {
                    x= ch;
                    break;
                }
            ans.push_back(x);
        }
        return ans;
	}
};
