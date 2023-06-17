class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        vector<int> ans; 
        
        int sum_lower = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<=i; j++){
                sum_lower += matrix[i][j];
            }
        }
        
        int sum_upper = 0; 
        for(int i = 0; i<n; i++){
            for(int j = n - 1; j>=i; j--){
                sum_upper += matrix[i][j];
            }
        }
        
        ans.push_back(sum_upper);
        ans.push_back(sum_lower);
        
        return ans;
    }
};
