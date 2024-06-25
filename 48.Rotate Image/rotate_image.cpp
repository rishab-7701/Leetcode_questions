class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // finding the transpose of the given Matrix
        for(int i = 0; i<=n-2; i++){
            for(int j = i+1;j<=n-1;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // after transpose we will reverse every matrix[i] row
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        return;
    }
};