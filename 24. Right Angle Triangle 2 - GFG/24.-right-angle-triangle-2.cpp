// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void triangle(int n){
        
    //Write your code here
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==1 || i==n || j == i)
            cout<<"* ";
            else if(j==1)
            cout<<"*  ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
        
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
	    triangle(s);
	}
}  // } Driver Code Ends