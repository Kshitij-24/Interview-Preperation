// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution{
  public:
    long unique_elements(vector<long>nums)
    {
        // Your code here
        long long int sum = 0;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x: mp){
            if(x.second==1)
            sum += x.first;
        }
        return sum;
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
        
        vector<long>v(n,0LL);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        Solution obj;
        cout<<obj.unique_elements(v)<<endl;
    }
    return 0;
}  // } Driver Code Ends