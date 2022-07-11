// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int unique_substring(string str)
    {
        // Your code here
        int i,j,n;
        n = str.length();
        unordered_set<string> s;
        for(i=0;i<n;i++){
            string ans = "";
            for(j=i;j<n;j++){
                ans += str[j];
                s.insert(ans);
            }
        }
        return s.size();
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t-->0){
        string str;
        cin>>str;
        Solution ob;
        int ans= ob.unique_substring(str);
        cout<<ans<<endl;
    }
}  // } Driver Code Ends