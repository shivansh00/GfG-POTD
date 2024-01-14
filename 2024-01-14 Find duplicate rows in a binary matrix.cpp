class Solution {   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) {
        // Your code here
        map<vector<int>, vector<int>> m;
        for (int i= 0; i < M; i++)
            m[matrix[i]].push_back(i);
        vector<int> ans;
        for (auto &it: m)
            for (int i= 1; i < it.second.size(); i++)
                ans.push_back(it.second[i]);
        sort(ans.begin(), ans.end());
        return ans;
    } 
};
