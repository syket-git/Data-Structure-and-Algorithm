class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        vector<int> ans;
        
        // Row Size
        int n = matrix.size();
        // Column Size
        int m = matrix[0].size();
        
        int count = 1;
        
        for(int i = 0; i<n; i++){
           if(count != 0 && count % 2 == 0){
               // Even Number
               
           
              for(int j = n - 1; j >= 0; j--){
                  ans.push_back(matrix[i][j]);
                // cout << "Even " << matrix[i][j] << endl;
              }
              count++;
             
               
           }else{
               // Odd Number
              for(int j = 0; j < m; j++){
                  ans.push_back(matrix[i][j]);
              }
              count++;
           }
        }
        
        return ans;
    }
};
