class Solution {
    vector<int> ans;
    bool rev= false;
public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int>> matrix) {
        // code here
        for (vector<int> &row: matrix) {
            if (rev)
                ans.insert(ans.end(), row.rbegin(), row.rend());
            else
                ans.insert(ans.end(), row.begin(), row.end());
            rev= !rev;
        }
        return ans;
    }
};
