// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

void scientific(double a)
{
    //code here
    double b = a;
    cout<<std::scientific<<std::setprecision(4)<<b;
    
   
}

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    double a;
	    cin>>a; 
	    scientific(a);
	    cout<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends