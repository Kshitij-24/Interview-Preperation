// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

void utility(bool a) {

    // code here
    if(a == 1)
    cout<<"true";
    else
    cout<<"false";
}

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        bool a;
        cin >> boolalpha >> a;
        utility(a);
        cout << endl;
    }
}  // } Driver Code Ends