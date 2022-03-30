class Solution {
public:
    bool rotateString(string s, string goal) {
        int n1 = s.length();
        int n2 = goal.length();
        if(n1 != n2)
            return false;
        s = s + s;
        if(s.find(goal) == string::npos)
            return false;
        return true;
    }
};