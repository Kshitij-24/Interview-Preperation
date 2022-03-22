class Solution {
public:
    char findTheDifference(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        char ans;
        if(n1 == 0)
            ans = t[0];
        for(int i=0;i<n2;i++){
            if(s[i] != t[i]){
                ans = t[i];
                break;
            }
        }
        return ans;
    }
};