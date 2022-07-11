// { Driver Code Starts
//Initial Template for C++

// unordered_set::hash_function
#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Complete the function
long int HashMe (unordered_set<string> myset, string str){

    // Your code here
   // Use hash function
//   myset.insert(str);
    hash<string> myhash;
    return myhash(str);
   

}


// { Driver Code Starts.

int main ()
{

  int t;
  cin>>t;
  
  while(t--){

  string str;
  cin>>str;

  unordered_set<string> myset;

  cout << HashMe(myset, str) << endl;

}
 
  return 0;
}
  // } Driver Code Ends