class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
    int m = matrix[0].size();
    
    int rowArr[n];
    int colArr[m];
    for(int i=0;i<n;i++){
        rowArr[i] = true;
    }
    for(int i=0;i<m;i++)
        colArr[i] = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 0){
                rowArr[i] = false;
                colArr[j] = false;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rowArr[i] == false || colArr[j] == false)
                matrix[i][j] = 0;
        }
    }
    }
};