class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        int n = words.size();
        vector<vector<int>> matrix(n, vector<int>(26, 0));
        int i=0;
        while(i<n){
            string s = words[i];
            for(int j=0;j<s.length();j++)
                matrix[i][s[j]-'a']++;
            i++;
        }
        for(int i=0;i<26;i++){
            int finalOccurence = INT_MAX;
            for(int j=0;j<n;j++){
                int index = matrix[j][i];
                finalOccurence = min(index, finalOccurence);
            }
            if(finalOccurence > 0){
                for(int k=0;k<finalOccurence;k++)
                    ans.push_back(string(1,'a'+i));
            }
        }
        return ans;
    }
};