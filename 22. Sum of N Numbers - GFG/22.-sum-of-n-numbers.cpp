// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int nSum(int n){
    int ans = 0;

    //Write your code here to calculate and return sum of n number.
    int i=1;
    while(i<=n){
        ans+=i;
        i++;
    }

    return ans;
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--) {
        int n;
        cin>>n;
        int ans=nSum(n);
        cout<<ans<<endl;
    }
	
}  // } Driver Code Ends