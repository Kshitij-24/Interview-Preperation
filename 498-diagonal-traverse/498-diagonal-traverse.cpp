class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        map<int, vector<int>> record;
        for(int i=0;i<matrix.size();i++){
            for(int j = 0;j<matrix[i].size();j++){
                record[i+j].push_back(matrix[i][j]);
            }
        }
        map<int, vector<int>>:: iterator itr;
        vector<int> answer;
        for(itr = record.begin(); itr != record.end(); itr++){
            if((itr->first)%2 == 0){
                for(int i = itr->second.size()-1; i>=0; i--)
                    answer.push_back(itr->second[i]);
            }
            else{
                for(int i=0;i<itr->second.size();i++)
                    answer.push_back(itr->second[i]);
            }
        }
        return answer;
    }
};