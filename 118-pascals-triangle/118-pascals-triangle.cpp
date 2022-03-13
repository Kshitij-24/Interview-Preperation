class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> matrix;
        for(int i=0;i<numRows;i++){
            vector<int> rows(i+1);
            for(int j=0;j<rows.size();j++){
                if(j==0 || j==rows.size()-1)
                    rows[j] = 1;
                else
                    rows[j] = matrix[i-1][j-1] + matrix[i-1][j];
            }
            matrix.push_back(rows);
        }
        return matrix;
    }
};