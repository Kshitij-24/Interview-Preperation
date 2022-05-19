// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void square(int n){
    // code here
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j == 1)
            cout<<"* ";
            else if(j==n)
            cout<<"*";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    
    
}


// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        square(n);
    }
    return 0;
}  // } Driver Code Ends