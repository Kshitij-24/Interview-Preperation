// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void invTriangleWall(int s){
    
    //Write your code here
    int i = 0;
    while(i<s){
        int j=0;
        while(j<s-i){
            cout<<"*"<<" ";
            j++;
        }
        while(j<s){
            cout<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
        invTriangleWall(s);
	}
}  // } Driver Code Ends