class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        for(int i = 0;i<n;i++){
            int k = matrix[i].size();
            for(int j = 0;j<k;j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};