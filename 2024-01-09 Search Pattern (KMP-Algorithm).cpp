class Solution {
    vector<int> ret;
    public:
        vector <int> search(const string &pat, const string &txt) {
            //code here.
            for (int i= 0; i < txt.size(); i++)
                if (txt[i] == pat[0] and txt[i+ pat.size()- 1] == pat.back() and txt.substr(i, pat.size()) == pat)
                    ret.push_back(i+1);
            return ret;
        }
};
