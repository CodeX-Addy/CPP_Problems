class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        //transpose of matrix
        for(int i =0; i<matrix.size();i++){
            for(int j =0 ; j<i ; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        //reverse first and last column
        for(int i=0;i<matrix.size();i++){
            
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};
