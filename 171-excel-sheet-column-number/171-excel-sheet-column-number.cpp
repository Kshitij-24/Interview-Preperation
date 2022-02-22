class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(char i: columnTitle){
            int d = i - 'A' + 1;
            result = result*26 + d;
        }
        return result;
    }
};