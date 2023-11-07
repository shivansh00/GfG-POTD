class Solution {
    int sumUp= 0, sumDown= 0;
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n) {
        // code here
        for (int i= 0; i < matrix.size(); i++)
            for (int j= i; j < matrix.size(); j++)
                sumUp+= matrix[i][j];
        for (int i= 0; i < matrix.size(); i++)
            for (int j= 0; j <= i; j++)
                sumDown+= matrix[i][j];
        return {sumUp, sumDown};
    }
};
