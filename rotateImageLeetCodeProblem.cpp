class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix.size();
        int halfRow = col / 2;

        for(int i = 0; i<row; i++){
            for(int j = i; j<col; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i = 0; i<row; i++){
            for(int j = 0; j<halfRow; j++){


            swap(matrix[i][j], matrix[i][row - 1 - j]);

            }
     
        }
         
    }
};
