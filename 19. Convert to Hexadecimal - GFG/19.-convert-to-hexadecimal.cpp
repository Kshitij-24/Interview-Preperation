// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

void decTohex(int a) {

    // code here
    int b = a;
    cout<<std::hex;
    cout<<b;
}

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        int a;
        cin >> a;
        decTohex(a);
        cout << endl;
    }
}  // } Driver Code Ends