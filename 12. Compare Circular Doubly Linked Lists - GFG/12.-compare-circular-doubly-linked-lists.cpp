// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
    Node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *newNode(int data) {
    Node *temp = new Node(data);

    return temp;
}

int getLength(Node *head) {
    Node *temp = head;

    int count = 0;
    while (temp->next != head) {
        count++;
        temp = temp->next;
    }
    return count + 1;
}


 // } Driver Code Ends
// User function Template for C++

/*
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
*/
class Solution{
    public:
    bool compareCLL(Node* head1, Node* head2) {
    // Your code here
    Node* t1=head1;
     Node* t2=head2;
    
    
    do{
         if(t1->data != t2->data) return false;
         t1=t1->next;
         t2=t2->next;
     }while(t1!=head1 && t2!=head2);
     
     if(t1 == head1 && t2 == head2){
        return true;
     } 
     
     return false;
    }
    
};


// { Driver Code Starts.

void makeCircular(Node *head) {
    Node *temp = head;

    while (temp->next) {
        temp = temp->next;
    }

    temp->next = head;
    head->prev = temp;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n1;
        cin >> n1;
        Node *head1 = NULL, *tail1 = NULL;
        int x1;
        cin >> x1;
        head1 = newNode(x1);
        tail1 = head1;

        for (int i = 0; i < n1 - 1; i++) {
            cin >> x1;
            Node *temp = newNode(x1);
            tail1->next = temp;
            temp->prev = tail1;
            tail1 = temp;
        }

        int n2;
        cin >> n2;
        Node *head2 = NULL, *tail2 = NULL;
        int x2;
        cin >> x2;
        head2 = newNode(x2);
        tail2 = head2;

        for (int i = 0; i < n2 - 1; i++) {
            cin >> x2;
            Node *temp = newNode(x2);
            tail2->next = temp;
            temp->prev = tail2;
            tail2 = temp;
        }

        makeCircular(head1);
        makeCircular(head2);
        Solution ob;
        cout << ob.compareCLL(head1, head2);

        cout << endl;
    }
    return 0;
}  // } Driver Code Ends