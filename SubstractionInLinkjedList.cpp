/*Given two linked lists that represent two large positive numbers.
The task is to subtract the given two numbers represented by the
linked list. Subtract the smaller from the larger one.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

Node* subLinkedList(Node* l1, Node* l2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = subLinkedList(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends


/* Structure of linked list Node

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

*/

//You are required to complete this method

Node* reverse(Node* head){
    Node* prev = NULL , *next = NULL, *curr = head;
    while(curr){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* subTwoLists(Node* first, Node* second)
{
    // res is head node of the resultant list
    Node* res = NULL;
    Node *temp, *prev = NULL;
    int borrow = 0, sum;
 
    // while both lists exist
    while (first != NULL || second != NULL) {
       
        sum = borrow + (first ? first->data : 0) - (second ? second->data : 0);
        // update carry for next calculation
        borrow = (sum < 0) ? -1 : 0;
        // update sum if it is less than 0
        sum = sum<0 ? sum+10 : sum;
        // Create a new node with sum as data
        temp = new Node(sum);
        // if this is the first node then set it as head of the resultant list
        if (res == NULL)
            res = temp;
        // If this is not the first node then connect it to the rest.
        else
            prev->next = temp;
       
        // Set prev for next insertion
        prev = temp;
 
        // Move first and second pointers to next nodes
        if (first)
            first = first->next;
        if (second)
            second = second->next;
    }
    
    return res;
}
int Size(Node* head){
    int i=0;
    Node* temp=head;
    while(temp){
        i++;
        temp=temp->next;
    }
    return i;
}

bool l2greater(Node* l1,Node* l2){
    int n=Size(l1), m=Size(l2);
    if(n>m){
        return false;
    }else if(m>n){
        return true;
    }
    while(l1 && l2 && l1->data==l2->data){
        l1=l1->next;
        l2=l2->next;
    }
    if(!l1 && !l2){
        return false;
    }
    if(l1->data>l2->data){
        return false;
    }
    return true;
}

Node* subLinkedList(Node* l1, Node* l2)
{  
    while(l1 && l1->data==0) l1=l1->next;
    while(l2 && l2->data==0) l2=l2->next;
  Node* ans = NULL;
  if(!l2greater(l1 , l2)){
      ans = subTwoLists(reverse(l1),reverse(l2));
  }
  else{
      ans = subTwoLists(reverse(l2),reverse(l1));
  } 
  ans = reverse(ans);
  // remove leading zeroes.
   while(ans && ans->data==0) ans = ans->next;
    if(!ans) return new Node(0);
    return ans;
  
}