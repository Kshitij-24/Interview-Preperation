// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

// function should print the alphabets
// from c1 to c2 (space separated)
// No need to print the new line
// The new line will be printed by the
// driver's code.

void alphabets(char c1, char c2){
    // code here
    int start = c1;
    int end = c2;
    for(int i=start;i<=end;i++){
        cout<<(char)i<<" ";
    }
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    char c1, c2; cin>>c1>>c2;
            
        alphabets(c1, c2);
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends