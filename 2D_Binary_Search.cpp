class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        int n = rows*columns;
        int s = 0;
        int e = n-1;
        while (s <= e) {
            int mid = s + (e-s)/2;
            int rowindex = mid/columns;
            int colindex = mid%columns;
            if (matrix[rowindex][colindex] == target) {
                return true;
            }
            else if (matrix[rowindex][colindex] < target) {
                s = mid + 1;
            }
            else {
                e = mid -1;
            }
        }
        return false;
    }
};