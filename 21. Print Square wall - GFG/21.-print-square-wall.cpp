// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

void squareWall(int s) {
    // code here
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--) {
        int n;
        cin >> n;
        squareWall(n);
    }

    return 0;
}  // } Driver Code Ends