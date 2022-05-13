// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  string dest = "";
  int i = 0;
  while(src[i]){
      int j = i+1;
      while(src[j] == src[i])
      j++;
      
      dest += src[i];
      dest += (j-i)+'0';
      i=j;
  }
  return dest;
}     
 
