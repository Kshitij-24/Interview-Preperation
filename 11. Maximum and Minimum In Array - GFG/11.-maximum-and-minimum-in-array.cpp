// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Complete the below functions
int maximumElement(int arr[],int n)
{
    //Your code here
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>ans)
        ans = arr[i];
    }
    return ans;
}

int minimumElement(int arr[],int n)
{
    //Your code here
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<ans)
        ans = arr[i];
    }
    return ans;
}

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<maximumElement(arr,n)<<" "<<minimumElement(arr,n)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends