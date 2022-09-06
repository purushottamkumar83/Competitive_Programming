/*Given a singly linked list, the task is to rearrange it in a way that all odd position nodes are together 
and all even positions node are together. Assume the first element to be at position 1 followed by second
element at position 2 and so on.
Note: You should place all odd positioned nodes first and then the even positioned ones. (considering 1 
based indexing). Also, the relative order of odd positioned nodes and even positioned nodes should be 
maintained.*/
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};



class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
        Node* even=new Node(0);
       Node* odd=new Node(0);
       Node* e=even;
       Node* temp=head;
       Node* o=odd;
       int c=1;
       while(temp){
           if(c%2!=0){
               o->next=temp;
               o=o->next;
           }else{
               e->next=temp;
               e=e->next;
           }
           temp=temp->next;
           c++;
       }
       o->next=NULL;
       e->next=NULL;
       o->next=even->next;
       head=odd;
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main()
{
    int T,i,n,l;

    cin>>T;

    while(T--)
    {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>l;

            if (head == NULL)
            {   
                head = temp = new Node(l); 
                
            }
            else
            {  temp->next = new Node(l);
               temp = temp->next;
            }
        }
        Solution ob;
        ob.rearrangeEvenOdd(head);
        while(head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
    return 0;
}

// } Driver Code Ends