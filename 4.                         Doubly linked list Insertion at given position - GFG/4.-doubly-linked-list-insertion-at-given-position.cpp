// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* a Node of the doubly linked list */
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x)
  {
      data = x;
      next = prev = NULL;
  }
};

void addNode(Node *head, int pos, int data);

Node *insert(Node *head, int x)
{
    if (head == NULL)
    {
        return new Node(x);
    }
    Node *n = new Node(x);
    
    head->next = n;
    n->prev = head;
    head = n;
    return head;
}

void printList(Node *head)
{
  // The purpose of below two loops is
  // to test the created DLL
  Node *temp=head;
  if (temp != NULL) {
 
  while (temp->next!=NULL)
    temp=temp->next;
  while (temp->prev!=NULL)
   temp = temp->prev;
  }
  while (temp != NULL)
  {
      printf("%d ",temp->data);
      temp=temp->next;
  }
  
  cout << endl;
}

int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
  Node *head = NULL; 
  Node *root = NULL;
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
     int x;
     scanf("%d",&x);
     head = insert(head, x);
     if(root==NULL) root = head;
  }     
  head = root;
  int pos,data;
  cin>>pos>>data;
  addNode(head, pos, data);
  printList(head);
  }
  return 0;
}// } Driver Code Ends


/* a Node of the doubly linked list 
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

//Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
   // Your code here
   Node *newnode = new Node(data);         
    Node *cur = head;
    
    //using another pointer to traverse the linked list till position given.
    for (int i=0; i<pos; i++)               
        cur=cur->next;
    
    //if the node next to node at given position is null, we make the next
    //as new node and new node's previous link as this current node.
    if (cur->next==NULL) {                  
        cur->next=newnode;                  
        newnode->prev=cur;
    }
    else {
        
        //storing the next node to current node in link part(next) of new node.
        newnode->next=cur->next; 
        
        //storing new node in link part(next) of current node.
        cur->next=newnode;  
        
        //storing the new node in previous link part(prev) of the node which 
        //was next to current node initially.
        newnode->next->prev=newnode; 
        
        //store the current node in previous link part(prev) of new node.
        newnode->prev=cur;                  
    }
}