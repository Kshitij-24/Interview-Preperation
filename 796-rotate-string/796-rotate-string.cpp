class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int i = 0;
        while(i<n){
            if(s==goal)
                return true;
            char ch = s[s.length()-1];
            s.pop_back();
            s = ch + s;
            i++;
        }
        return false;
    }
};