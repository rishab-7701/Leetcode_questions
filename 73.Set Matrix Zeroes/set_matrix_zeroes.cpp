class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        // intializing 2 vectors which marks for the entire row|column(for hashing)
        vector <int> row(n,0);
        vector <int> col(m,0);
        
        // this nested loop finds the zeroes in the matrix
        // and marks the entire row|column which contains "0" as "1" 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
               if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
               }
            }
        }

        // now re-iterate:while re-iterating we will set zeroes inside the matrix

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i] || col[j]){
                    matrix[i][j]=0;
                }
            }
        }
        return;
    }
};