// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(int a, int b, int operator_){

    //write your code here
    if(operator_ == 1)
    cout<<a+b;
    else if(operator_ == 2)
    cout<<a-b;
    else
    cout<<a*b;
    
    
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--){
	    int a, b, operator_;
	    cin>>a>>b>>operator_;
        utility(a, b, operator_);
        cout<<endl;
	}
	
}  // } Driver Code Ends