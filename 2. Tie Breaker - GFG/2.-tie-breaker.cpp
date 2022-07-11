// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        string TieBreak(string names[], int n)
    {
        // your code here
        unordered_map<string, int> mp;
        for(int i=0;i<n;i++){
            mp[names[i]]++;
        }
        int max_freq = 0;
        string ans = "";
        for(auto x: mp){
            if(x.second > max_freq){
                max_freq = x.second;
                ans = x.first;
            }
            else if(x.second == max_freq && x.first<ans){
                ans = x.first;
            }
            
        }
        return ans;
    }
};



// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        string names[n];
        for(int i = 0; i < n; i++)
            cin>>names[i];
        Solution ob;
        cout << ob.TieBreak(names,n) <<endl; 
    }
}
  // } Driver Code Ends