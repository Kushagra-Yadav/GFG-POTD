//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Node Class
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(NULL) {}
};

// Linked List Class
class LinkedList {
public:
    Node* head;
    Node* tail;

    LinkedList() : head(NULL), tail(NULL) {}

    // creates a new node with given value and appends it at the end of the linked list
    void insert(int val) {
        if (head == NULL) {
            head = new Node(val);
            tail = head;
        } else {
            tail->next = new Node(val);
            tail = tail->next;
        }
    }
};


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
  Node *rev(Node *h)
  {
      Node *prev=NULL;
      Node *curr=h;
      Node *temp;
      while (curr)
      {
          temp=curr->next;
          curr->next=prev;
          prev=curr;
          curr=temp;
          
      }
      return prev;
  }
  int len(Node *h)
  {
      int l=0;
      while(h!=NULL)
      {
          l++;
          h=h->next;
      }
      return l;
  }
    Node* subLinkedList(Node* head1, Node* head2) {
        while(head1!=NULL && head1->data==0)
        {
            head1=head1->next;
        }
        while(head2!=NULL && head2->data==0)
        {
            head2=head2->next;
        }
        Node *n=new Node(0);
        if(head1==NULL && head2==NULL)
        return n;
        int f=len(head1);
        int s=len(head2);
        
        if(f<s)
        {
            Node *temp=head1;
            head1=head2;
            head2=temp;
        }
        if(f==s)
        {
            Node *h1=head1;Node *h2=head2;
            while(h1 && h2 && h1->data==h2->data)
            {
                h1=h1->next;
                h2=h2->next;
            }
            if(h1==NULL && h2==NULL )
            {
                return n;
            }
            if(h1->data<h2->data)
             {
            Node *temp=head1;
            head1=head2;
            head2=temp;
             }
            
        }
        head1=rev(head1);
        head2=rev(head2);
        Node *past_head=head1;
        while(head1!=NULL)
        {
            
            int x=0;
                if(head2!=NULL)
                x=head2->data;
            if(head1->data<x)
            {
               head1->data=head1->data+10-x;
                head1=head1->next;
                if(head1!=NULL)
                head1->data-=1;
            }
            else
            {
                head1->data=head1->data-x;
                head1=head1->next;
            }
            if(head2!=NULL)
            head2=head2->next;
            
            
        }
        Node *ans=rev(past_head);
        while(ans!=NULL && ans->data==0)
        {
            ans=ans->next;
        }
        // Your implementation of subLinkedList goes here
        // Make sure to return the head of the resulting linked list
        return ans==NULL?n:ans;
    }
};

//{ Driver Code Starts.

// prints the elements of linked list starting with head
void printList(Node* n) {
    while (n) {
        cout << n->data;
        n = n->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        LinkedList LL1;
        string l1,l2;
        cin>>l1;
        for (int j = 0; j < n; ++j) {
            int x=(l1[j]-'0');
            LL1.insert(x);
        }

        int m;
        cin >> m;
        LinkedList LL2;
        cin>>l2;
        for (int j = 0; j < m; ++j) {
            int x=(l2[j]-'0');
            LL2.insert(x);
        }

        Solution ob;
        Node* res = ob.subLinkedList(LL1.head, LL2.head);
        printList(res);
    }

    return 0;
}

// } Driver Code Ends
