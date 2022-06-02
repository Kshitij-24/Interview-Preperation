// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    int fibonacci(int n)
    {
        //Your code here
        int ans = 0;
        if(n<=1)
        return n;
        ans = fibonacci(n-1) + fibonacci(n-2);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
	int T;
	
	//taking total testcases
	cin>>T;
	while (T--)
	{
	    int n;
	    //taking number n
	    cin>>n;
	    Solution ob;
	    //calling fibonacci() function
	    cout<<ob.fibonacci(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends