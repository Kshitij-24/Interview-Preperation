class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        map<char,char>m;
        
        stack <char>st;
        m['(']=')';
        m['{']='}';
        m['[']=']';
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
            st.push(s[i]);
            else if(s[i]==')' || s[i]=='}' || s[i]==']')
            { 
                if(st.empty())
                return 0;
                if(s[i]!=m[st.top()])
                return 0;
                st.pop();
            }
        } 
        if(st.empty())
        return 1;
        return 0;
    }
};