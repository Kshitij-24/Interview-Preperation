// { Driver Code Starts
#include <iostream>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int factorial(int N)
    {
        //Your code here
        int ans = 1;
        if(N==0)
        return ans;
        
        ans = N * factorial(N-1);
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    Solution ob;
	    cout<<ob.factorial(N)<<endl;
	}
	return 0;
}  // } Driver Code Ends