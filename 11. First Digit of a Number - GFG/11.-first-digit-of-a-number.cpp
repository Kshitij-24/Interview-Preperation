// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

// Complete the function
int firstDigit(int n){
    // code here
    int ans;
    while(n){
        ans = n%10;
        n = n/10;
    }
    return ans;
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
            
        int answer = firstDigit(n);
        cout<<(answer)<<endl;
	}
}  // } Driver Code Ends