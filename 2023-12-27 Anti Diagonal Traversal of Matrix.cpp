class Solution {
    vector<int> ad;
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) {
        // Code here
        for (int k= 0; k < matrix.size(); k++)
            for (int i= 0, j= k; j >= 0; i++, j--)
                ad.push_back(matrix[i][j]);
        for (int k= 1; k < matrix.size(); k++)
            for (int i= k, j= matrix.size()- 1; i < matrix.size(); i++, j--)
                ad.push_back(matrix[i][j]);
        return ad;
    }
};
