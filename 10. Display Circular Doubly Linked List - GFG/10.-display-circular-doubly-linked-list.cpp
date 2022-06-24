// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};

Node *newNode(int data)
{
    Node *temp=new Node(data);
    
    return temp;
}





 // } Driver Code Ends
//User function Template for C++


/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
vector<int> displayList(Node *head)
{
    vector<int> ans;
    if(head == NULL)
    return ans;
    Node *curr = head;
    while(curr->next != head){
        ans.push_back(curr->data);
        curr = curr->next;
    }
    ans.push_back(curr->data);
    return ans;
}

// { Driver Code Starts.



void makeCircular(Node * head)
{
    Node * temp=head;
    
    while(temp->next)
    {
        temp=temp->next;
    }
    
    temp->next=head;
    head->prev=temp;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    Node *head=NULL, *tail=NULL;
        int x;
	    cin>>x;
	    head = newNode(x);
	    tail = head;
	    
	    for(int i=0;i<n - 1;i++)
	    {
	        cin>>x;
	        Node* temp=newNode(x);
	        tail->next=temp;
	        temp->prev= tail;
	        tail = temp;
	    }
	    
	    
	    makeCircular(head);
	    vector<int> vec = displayList(head);
	    for(int c: vec){
	        cout<<c<<" ";
	    }
	    cout<<endl;
	    for(int i = vec.size()-1;i>=0;i--){
	        cout<<vec[i]<<" ";
	    }
 
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends