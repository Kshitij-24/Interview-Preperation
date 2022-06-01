// { Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    //Complete this function
    int isSorted(int arr[],int n)
    {
      
      //Your code here
      int asc = 0;
      int dsc = 0;
      for(int i=1;i<n;i++){
          if(arr[i]<arr[i-1]){
              asc = 1;
              break;
          }
      }
      for(int i=1;i<n;i++){
          if(arr[i]>arr[i-1]){
              dsc = 1;
              break;
          }
      }
      if(asc == 1 && dsc == 1)
      return 0;
      return 1;
      
       
    }
};

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    Solution obj;
	    cout<<obj.isSorted(arr,N);
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends