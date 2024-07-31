//Code 3
//search a 2D matrix
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0;
        int j = m - 1;
        if (n == 0)
        {
            return false;
        }
        while (i < n && j >= 0)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
            else if (matrix[i][j] > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};
