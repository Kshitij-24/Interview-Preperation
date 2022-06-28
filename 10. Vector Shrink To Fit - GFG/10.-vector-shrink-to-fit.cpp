// { Driver Code Starts
//Initial Template for C++

// vector::shrink_to_fit
#include <iostream>
#include <vector>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete the function
void ShrinkMe(vector<int> myvector, int newsize){

	 // Your code here
    // Use shrink_to_fit function
    //Write here
    myvector.resize(newsize);
    cout<<myvector.capacity();
    
    cout<<endl;
    
    //Write here
    myvector.shrink_to_fit();
    cout<<myvector.capacity();

}


// { Driver Code Starts.

int main ()
{
    int t;
    cin>>t;

    while(t--){

        int size;
        cin>>size;

        int newsize;
        cin>>newsize;

        vector<int> myvector(size);

        ShrinkMe(myvector, newsize);
        cout<<endl;
    
    }

  return 0;
}
  // } Driver Code Ends