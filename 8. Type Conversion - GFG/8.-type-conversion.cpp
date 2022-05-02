// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int typeCast(double d){
    
    //code here
    int ans = int(d);
    // cout<<ans<<endl;
    return ans;
    
}

// { Driver Code Starts.    

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    double d;
	    cin>>d;
	    
	    int answer = typeCast(d);
            
        cout<<answer<<endl;
	}
	
}  // } Driver Code Ends